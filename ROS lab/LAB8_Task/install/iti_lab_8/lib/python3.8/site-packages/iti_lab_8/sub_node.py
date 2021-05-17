#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class sub_node(Node):
    def __init__(self):
        super().__init__("sub_node")
        self.sub_obj = self.create_subscription(String, "custom_topic", self.sub_callBack, 10)

    def sub_callBack(self, msg):
        self.get_logger().info("I Heard: {}".format(msg.data))        
        

def main(args=None):
    rclpy.init(args=args)
    node = sub_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
