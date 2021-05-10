#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from std_srvs.srv import Empty

class turtleReset_node(Node):
    def __init__(self):
        super().__init__("turtleReset_node")
        self.create_subscription(Pose, "turtle1/pose", self.turtleSub_callBack, 10)
        self.turtleReset_client = self.create_client(Empty, "reset")
       
        self.turtleReset_request = Empty.Request()
       
        self.current_x = 0.0
        self.current_y = 0.0

    def turtleSub_callBack(self, turtlePosition):
        self.current_x = turtlePosition.x
        self.current_x = turtlePosition.y

        if( (self.current_x > 2 and self.current_x < 8) or (self.current_y > 2 and self.current_y < 8) ):
            self.turtleReset_client.call_async(self.turtleReset_request)
            self.get_logger().info("Resetting !!!")


def main(args=None):
    rclpy.init(args=args)

    node = turtleReset_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
