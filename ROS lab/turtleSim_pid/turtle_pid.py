import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from math import sqrt, atan2

class turtle_control(Node):
    def __init__(self):

        self.old_linear_error = 0
        self.old_angular_error = 0

        self.linear_p_term = 0
        self.linear_i_term = 0
        self.linear_d_term = 0

        self.angular_p_term = 0
        self.angular_i_term = 0
        self.angular_d_term = 0

        super().__init__("turtle_ctrl_node")

        self.turtlePub = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.create_subscription(Pose, "/turtle1/pose", self.sub_callBack, 10)
        self.create_timer(1.0, self.timer_callBack)

    def sub_callBack(self, turtle_data):
        self.current_x = turtle_data.x
        self.current_y = turtle_data.y
        self.current_theta = turtle_data.theta

    def timer_callBack(self):
        
        turtle_cmd_ob = Twist()
        self.current_x_error = 9.0 - self.current_x
        self.current_y_error = 9.0 - self.current_y
 
        if( ((self.current_x_error >= -0.5) and (self.current_x_error <= 0.5)) and ((self.current_y_error >= -0.5) and (self.current_y_error <= 0.5)) ):
            turtle_cmd_ob.linear.x = 0.0
            turtle_cmd_ob.angular.z = 0.0
        else:
            self.current_linear_error = abs(sqrt( (self.current_x_error ** 2) + (self.current_y_error ** 2) ))
            self.current_angular_error = atan2(self.current_y_error, self.current_x_error) - self.current_theta

            self.linear_p_term = self.current_linear_error             
            self.linear_i_term += self.current_linear_error
            self.linear_d_term = self.current_linear_error - self.old_linear_error
            self.old_linear_error = self.current_linear_error

            self.angular_p_term = self.current_angular_error             
            self.angular_i_term += self.current_angular_error
            self.angular_d_term = self.current_angular_error - self.old_angular_error
            self.old_angular_error = self.current_angular_error

            turtle_cmd_ob.linear.x = float((0.1 * self.linear_p_term) + (0.1 * self.linear_i_term) + (1 * self.linear_d_term))
            turtle_cmd_ob.angular.z = float((0.1 * self.angular_p_term) + (1 * self.angular_i_term) + (1 * self.angular_d_term))

        self.turtlePub.publish(turtle_cmd_ob)


def main(args=None):
    rclpy.init(args=args)
    node = turtle_control()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
