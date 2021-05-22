#!/usr/bin/env python3

#Importing ROS client library 
import rclpy

#Importing Node class
from rclpy.node import Node

#Importing standard IMU sensor message
from sensor_msgs.msg import Imu

#Importing pi from math library
from math import pi

#Importing numpy library
import numpy as np

#Defining subscribtion node
class sub_node(Node):

    #Define sub_node constructor
    def __init__(self):
    	
    	#Inheriting Node class constructor
        super().__init__("imuSubNode")
	
		#Creating subscriber to subscribe at /imu topic
        self.imuSubscriber = self.create_subscription(Imu, "/imu", self.sub_callBack, 10)

    #This function is used to convert from quaternion dimensions (x, y, z, w) to euler ones (roll, pitch, yaw)
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

    #This function is used for subscribtion callback
    def sub_callBack(self, msg):
    	
    	#Getting the roll, pitch and yaw values
        roll, pith, yaw = self.euler_from_quaternion(msg.orientation)
		
		#Converting the yaw from radient to degrees
        yaw_degrees = yaw * (180/pi)
		
		#Checking if the yaw angle(degrees) is between [-2, 2] or not
        if( (yaw_degrees >= -2) and (yaw_degrees <= 2) ):
        	
        	#Printing the current yaw angle
            self.get_logger().info("The robot is nearly heading north ... heading is: {} degrees".format(yaw_degrees))
        else:
        	
        	#Do nothing
            pass
        
        #Checking if the linear acceleration in x is bigger than 0.3 m/s^2 or not
        if(msg.linear_acceleration.x > 0.3):
        	
        	#Printing a warning with the current linear acceleration in x
            self.get_logger().warning("Warning !! .. linear acceleration x exceeded the limit . Current acceleration is {} m/s^2".format(msg.linear_acceleration.x))
        else:
        	
        	#Do nothing
            pass
		
		#Checking if the angular velocity in z is bigger than 0.3 rad/sec or not
        if(msg.angular_velocity.z > 0.3):
        
        	#Printing a warning with the current angular velocity in z        	
            self.get_logger().warning("Warning !! .. angular acceleration z exceeded the limit . Current acceleration is {} rad/sec".format(msg.angular_velocity.z))
        else:
        	
        	#Do nothing
            pass

#Defining the main function
def main(args=None):

	#Initializing the ros client
    rclpy.init(args=args)
    
    #Getting node object
    node = sub_node()
    
    #Spinning over the node
    rclpy.spin(node)
    
    #Destroy the node when spinning is finished
    node.destroy_node()
    
    #Shutdown the ros client
    rclpy.shutdown()


#Checking if you're executing this file or not
if __name__ == "__main__":
	
	#Calling main function
    main()
