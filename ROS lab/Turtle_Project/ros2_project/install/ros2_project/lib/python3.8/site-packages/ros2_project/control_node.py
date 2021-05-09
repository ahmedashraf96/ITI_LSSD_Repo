#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from turtle_custom_msgs.srv import TurtleService

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist


from math import sqrt,atan2, sin, cos 

class turtle_control_node(Node):
    def __init__(self):
        super().__init__("control_node")
        self.create_timer(1, self.timerCallBack)
        self.twistPublisher = self.create_publisher(Twist, "turtle1/cmd_vel", 10)
        self.mainPoseSubscriber = self.create_subscription(Pose, "turtle1/pose", self.mainSubCallBack, 10)
        self.desiredPoseSubscriber = self.create_subscription(Pose, "turtle2/pose", self.desiredSubCallBack, 10)
        self.turtle_spawnClient = self.create_client(TurtleService, "turtle_spawn")
       
        self.spawnReq = TurtleService.Request()        

        self.P_linearGain = 1
        self.P_angularGain = 1

        self.current_x = 0.0
        self.current_y = 0.0
        self.current_theta = 0.0

        self.desired_x = 0.0
        self.desired_y = 0.0
        self.desired_theta = 0.0

    def timerCallBack(self):
        velocity_control = Twist()

        self.linear_dist = abs(sqrt( ((self.current_x - self.desired_x)**2) + ((self.current_y - self.desired_y)**2) ))
        self.linearSpeed = self.linear_dist * self.P_linearGain
        self.desired_theta = atan2((self.current_y - self.desired_y), (self.current_x - self.desired_x))
        self.theta_error = self.desired_theta - self.current_theta
        self.angularSpeed = self.theta_error * self.P_angularGain
        
        velocity_control.linear.x = self.linearSpeed * cos(self.desired_theta)
        velocity_control.linear.y = self.linearSpeed * sin(self.desired_theta)
        velocity_control.angular.z = self.angularSpeed

        self.twistPublisher.publish(velocity_control)

        if( ( (self.desired_x >= self.current_x - 0.1) and (self.desired_x <= self.current_x + 0.1) ) and ( (self.desired_y >= self.current_y - 0.1) and (self.desired_y <= self.current_y + 0.1) ) ):
            self.spawnReq.status = True
            self.newTurtle = self.turtle_spawnClient.call_async(self.spawnReq)
            response = self.newTurtle.result()
            self.desiredPoseSubscriber.destroy()
            self.desiredPoseSubscriber = self.create_subscription(Pose, "{}/pose".format(response.name), self.desiredSubCallBack, 10)
            
    def mainSubCallBack(self, mainTurtle_data): 
        self.current_x = mainTurtle_data.x
        self.current_y = mainTurtle_data.y
        self.current_theta = mainTurtle_data.theta

    def desiredSubCallBack(self, desiredTurtle_data):        
        self.desired_x = desiredTurtle_data.x
        self.desired_y = desiredTurtle_data.y
        self.desired_theta = desiredTurtle_data.theta

def main(args=None):
    rclpy.init(args=args)

    node = turtle_control_node()
    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()