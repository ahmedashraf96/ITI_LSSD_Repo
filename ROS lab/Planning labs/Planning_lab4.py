#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

from nav_msgs.msg import Path
from geometry_msgs.msg import Pose,PoseStamped

import math
from geometry_msgs.msg import Quaternion
from math import sin, cos, pi
import numpy as np




class sub_node(Node):

    def __init__(self):

        super().__init__("sub_node")
               
        self.pose_sub=self.create_subscription(Path,"/local_plan",self.sub_callBack,10) 
        self.string_pub=self.create_publisher(String,"/robot_curvature",10)
        self.get_logger().info("subscriber and publisher have been started")

    def euler_from_quaternion(self, quaternion):
            x = quaternion.x
            y = quaternion.y
            z = quaternion.z
            w = quaternion.w

            sinr_cosp = 2 * (w * x + y * z)
            cosr_cosp = 1 - 2 * (x * x + y * y)
            roll = np.arctan2(sinr_cosp, cosr_cosp)

            sinp = 2 * (w * y - z * x)
            pitch = np.arcsin(sinp)

            siny_cosp = 2 * (w * z + x * y)
            cosy_cosp = 1 - 2 * (y * y + z * z)
            yaw = np.arctan2(siny_cosp, cosy_cosp)

            return roll, pitch, yaw 

    def menger_curvature(self, point_1_x, point_1_y, point_2_x, point_2_y, point_3_x, point_3_y):
        triangle_area = 0.5 * abs( (point_1_x*point_2_y) + (point_2_x*point_3_y) + (point_3_x*point_1_y) - (point_2_x*point_1_y) - (point_3_x*point_2_y) - (point_1_x*point_3_y))#Shoelace formula 
            
        try:
            curvature = (4*triangle_area) / (math.sqrt(pow(point_1_x - point_2_x,2)+pow(point_1_y - point_2_y,2)) * math.sqrt(pow(point_2_x - point_3_x,2)+pow(point_2_y - point_3_y,2)) * math.sqrt(pow(point_3_x - point_1_x,2)+pow(point_3_y - point_1_y,2)))#Menger curvature 
            return curvature
        except:
            return 0 

    def sub_callBack(self,msg):
        state = String()
        poses_length = len(msg.poses)
        curvature = 0
        direction = 0
        curve_point1_x = 0
        curve_point1_y = 0

        curve_point2_x = int(poses_length/10)
        curve_point2_y = int(poses_length/10)

        curve_point3_x = int(poses_length/5)
        curve_point3_y = int(poses_length/5)

        if poses_length > 10:
            p1_x = msg.poses[0].pose.position.x
            p1_y = msg.poses[0].pose.position.y
            v = msg.poses[0].pose.orientation
            
            r,p,yaw_1 =self.euler_from_quaternion(msg.poses[0].pose.orientation)

            p2_x=msg.poses[5].pose.position.x
            p2_y=msg.poses[5].pose.position.y
          
            r,p,yaw_2 =self.euler_from_quaternion(msg.poses[5].pose.orientation)

            p3_x=msg.poses[10].pose.position.x
            p3_y=msg.poses[10].pose.position.y
          
            r,p,yaw_3 =self.euler_from_quaternion(msg.poses[10].pose.orientation)

            direction=(yaw_1-yaw_3)
            
            curvature=self.menger_curvature(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y)


        if curvature > 1:
            state.data=(" The robot is turning with a curvature:{} where {}  is the curavature of the path.".format(curvature , curvature))

            self.string_pub.publish(state)

            if direction > 0 :               
                self.get_logger().info(" The robot is turning RIGHT with a curvature:{} where {}  is the curavature of the path.".format(curvature , curvature))
            else:
                self.get_logger().info(" The robot is turning LEFT with a curvature:{} where {}  is the curavature of the path.".format(curvature , curvature))
                 

        else :
            state.data=("The path is straight  :{}".format(curvature))
            self.get_logger().info("The path is straight  :{}".format(curvature))
            self.string_pub.publish(state)
       
        self.get_logger().info("The path is   :{}".format(direction))
  
def main(args=None):
    rclpy.init(args=args)
    node = sub_node()
    rclpy.spin(node)

    rclpy.shutdown()

if __name__=="__main__":
    main()
