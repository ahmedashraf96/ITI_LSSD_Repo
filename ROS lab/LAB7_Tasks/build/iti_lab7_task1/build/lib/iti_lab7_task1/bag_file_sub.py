#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class bagFileSub_node(Node):
    def __init__(self):
        self.counter = 0
        super().__init__("bagFileSub_node")
        self.sub = self.create_subscription(String, "my_topic", self.bagSub_callBack, rclpy.qos.qos_profile_sensor_data)
        self.get_logger().info("Node started")
    
    def bagSub_callBack(self, msg):
        self.counter += 1
        self.get_logger().info("Ahmed heard: {0}, {1} times".format(msg.data, self.counter))


def main(args=None):
    rclpy.init(args=args)

    node = bagFileSub_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
