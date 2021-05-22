#!/usr/bin/env python3

#Importing ROS client library 
import rclpy

#Importing Node class
from rclpy.node import Node

#Importing standard IMU sensor message
from nav_msgs.msg import Odometry

#Importing pi from math library
from math import pi

#Importing numpy library
import numpy as np

#Function used to convert quaternion dimensions to euler ones
def euler_from_quaternion(quaternion):
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

#Defining subscribtion node
class sub_node(Node):

    #Define sub_node constructor
    def __init__(self):
    	
        #Counter used in getting "pose.csv" file data records
        self.record_counter = 1
    	
        #Inheriting Node class constructor
        super().__init__("OdomSubNode")
	
		#Creating subscriber to subscribe at /imu topic
        self.imuSubscriber = self.create_subscription(Odometry, "/odom", self.sub_callBack, 10)

        #Opening the pose file
        odomData_file = open("pose.csv")

        #Getting the pose data in the file
        self.odomData_seperated = odomData_file.read().split('\n')

    #This function is used for subscribtion callback
    def sub_callBack(self, robot_data):

        #Getting roll, pitch and yaw angles
        roll, pitch, yaw = euler_from_quaternion(robot_data.pose.pose.orientation)

        #Converting yaw angle into degrees
        yaw_degrees = yaw * (180.0 / pi)

        #Getting x and y posotion in meters
        x_m = robot_data.pose.pose.position.x
        y_m = robot_data.pose.pose.position.y

        #Printing the current x, y and yaw values
        self.get_logger().info("Current x: {}, Current y: {}, Current angle: {}".format(x_m, y_m, yaw_degrees))

        #Seperating odom data record at every ','
        odomData = self.odomData_seperated[self.record_counter].split(',')
        
        #Checking if csv file is ended or not
        if(odomData[0] != ''):
            
            #Checking if the odom pose data is: ( >= x-0.5 or <= x+0.5), ( >= y-0.5 or <= y+0.5) and ( >= yaw-5 or <= yaw+5)
            if( ((float(odomData[0]) >= x_m - 0.5) and (float(odomData[0]) <= x_m + 0.5)) and 
                ((float(odomData[1]) >= y_m - 0.5) and (float(odomData[1]) <= y_m + 0.5)) and
                ((float(odomData[2]) >= yaw_degrees - 5) and (float(odomData[2]) <= yaw_degrees + 5)) ):
                
                #Increment the pose data record counter to get the next one
                self.record_counter += 1
            
            else:
                
                #Do nothing
                pass
        
        else:

            #Seperating odom data record at every ','
            odomData = self.odomData_seperated[self.record_counter - 1].split(',')

            #Printing the robot last position
            self.get_logger().info("I executed all positions and last one is " + odomData[0] + ", " + odomData[1] + ", " + odomData[2])

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