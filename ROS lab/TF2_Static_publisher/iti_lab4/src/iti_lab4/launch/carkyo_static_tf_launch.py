from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ob = LaunchDescription()
    gps_link_node = Node(package = "tf2_ros",
                         executable = "static_transform_publisher",
                         output = "screen",
                         arguments = ["0", "0", "1.77", "0", "0", "0", "base_link", "gps_link"]
                        )
    lidar_link_node = Node(package = "tf2_ros",
                           executable = "static_transform_publisher",
                           output = "screen",
                           arguments = ["1.92", "0", "0.36", "0", "0", "0", "base_link", "lidar_link"]
                          )

    zed2_link_node = Node(package = "tf2_ros",
                          executable = "static_transform_publisher",
                          output = "screen",
                          arguments = ["1.8", "0.03", "1", "0", "0", "0", "base_link", "zed2_link"]
                         )

    ment_link_node = Node(package = "tf2_ros",
                          executable = "static_transform_publisher",
                          output = "screen",
                          arguments = ["-0.1", "0", "0.88", "3.14", "0", "0", "base_link", "ment_link"]
                         )

    imu_link_node = Node(package = "tf2_ros",
                         executable = "static_transform_publisher",
                         output = "screen",
                         arguments = ["1.8", "0.5", "1", "-1.57", "0", "0", "base_link", "imu_link"]
                        )

    ob.add_action(gps_link_node)
    ob.add_action(lidar_link_node)
    ob.add_action(zed2_link_node)
    ob.add_action(ment_link_node)
    ob.add_action(imu_link_node)

    return ob