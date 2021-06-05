#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Path
import math

  
class gettingCurve_node(Node):
    def __init__(self):
        super().__init__("gettingCurve_node")
        self.create_subscription(Path, "/plan", self.timer_call,10)
        self.get_logger().info("subscriber has been started")



    def timer_call(self, msg):
        x=len (msg.poses)
        if (x > 10 ):
            point_1_x = msg.poses[0].pose.position.x
            point_1_y = msg.poses[0].pose.position.y
            point_2_x = msg.poses[5].pose.position.x
            point_2_y = msg.poses[5].pose.position.y
            point_3_x = msg.poses[10].pose.position.x
            point_3_y = msg.poses[10].pose.position.y
            curv = self.menger_curvature(point_1_x, point_1_y, point_2_x, point_2_y, point_3_x, point_3_y)
            if curv < 1.0 :
                self.get_logger().info("The path is straight")
            else :
               self.get_logger().info("The path is The robot is turning with a curvature " + str(curv))

    def menger_curvature(self, point_1_x, point_1_y, point_2_x, point_2_y, point_3_x, point_3_y):
        triangle_area = 0.5 * abs( (point_1_x*point_2_y) + (point_2_x*point_3_y) + (point_3_x*point_1_y) - (point_2_x*point_1_y) - (point_3_x*point_2_y) - (point_1_x*point_3_y))#Shoelace formula 

        curvature = (4*triangle_area) / (math.sqrt(pow(point_1_x - point_2_x,2)+pow(point_1_y - point_2_y,2)) * math.sqrt(pow(point_2_x - point_3_x,2)+pow(point_2_y - point_3_y,2)) * math.sqrt(pow(point_3_x - point_1_x,2)+pow(point_3_y - point_1_y,2)))#Menger curvature 
        return curvature


def main (args=None):
    rclpy.init(args=args)
    node = gettingCurve_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
