from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ob = LaunchDescription()

    turtle_node = Node(package= "turtlesim",
                      executable= "turtlesim_node",
                      output= "screen"
                     )

    spawn_node = Node(package= "ros2_project",
                      executable= "turtle_spawn",
                      output= "screen"
                     )

    control_node = Node(package= "ros2_project",
                        executable= "turtle_control",
                        output= "screen"
                       )                    

    ob.add_action(turtle_node)
    ob.add_action(spawn_node)
    ob.add_action(control_node)

    return ob


