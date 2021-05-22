#!/usr/bin/env python3

#Importing ROS client library 
import rclpy

#Importing Node class
from rclpy.node import Node

#Importing standard IMU sensor message
from sensor_msgs.msg import Imu

#Importing quaternion dimensions message 
from geometry_msgs.msg import Quaternion

#Importing sin, cos and pi from math library
from math import sin, cos, pi

#Defining publisher node
class pub_node(Node):

    #Define sub_node constructor
    def __init__(self):
    	
        #Counter used in getting IMU data record  
        self.record_counter = 0

    	#Inheriting Node class constructor
        super().__init__("imuPubNode")

        #Creating timer with 30Hz
        self.create_timer(1/30, self.timer_callBack)
	
		#Creating publisher to publish at /zed2_imu topic
        self.imuPublisher = self.create_publisher(Imu, "/zed2_imu", 10)
                
        #Opening imu_data.csv file to read its data
        imuFile_data = open("imu_data.csv")

        #Returning list of imu data (acc(x, y and z)[g], ang(x, y and z)[rad/sec] and yaw[degrees])
        self.imu_data = imuFile_data.read().split('\n')

    #Function used to convert from euler dimensions to quaternion ones    
    def quaternion_from_euler(self, roll, pitch, yaw):
        qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2)
        qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2)
        qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2)
        qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)
        return Quaternion(x=qx, y=qy, z=qz, w=qw)

    #This function is used as a timer call back
    def timer_callBack(self):

        #Variable used to get the yaw angle in degrees
        yaw_degrees = 0

        #Getting msg object from Imu_msg class
        imu_msg = Imu()

        #Creating frame named "zed2_imu_link"
        imu_msg.header.frame_id = "zed2_imu_link"

        #Getting the current time object
        now = self.get_clock().now()

        #Seperating the imu data at each ','
        imu_data_seperated = self.imu_data[self.record_counter].split(',')

        #Checking if the file has ended or not
        if(imu_data_seperated[0] != ''):
            
            #Getting the current header stamp time
            imu_msg.header.stamp = now.to_msg()

            #Getting the acc(x) im m/sec^2
            imu_msg.linear_acceleration.x = float(imu_data_seperated[0]) * 9.8

            #Getting the acc(y) im m/sec^2
            imu_msg.linear_acceleration.y = float(imu_data_seperated[1]) * 9.8

            #Getting the acc(z) im m/sec^2
            imu_msg.linear_acceleration.z = float(imu_data_seperated[2]) * 9.8

            #Setting the linear acceleration covariance
            imu_msg.linear_acceleration_covariance = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

            #Getting the ang(x) im rad/sec
            imu_msg.angular_velocity.x = float(imu_data_seperated[3])

            #Getting the ang(y) im rad/sec
            imu_msg.angular_velocity.y = float(imu_data_seperated[4])

            #Getting the ang(z) im rad/sec
            imu_msg.angular_velocity.z = float(imu_data_seperated[5])

            #Setting the angular velocity covariance
            imu_msg.angular_velocity_covariance = [0.0, 0.0, 0.01, 0.0, 0.0, 0.01, 0.0, 0.0, 0.001]

            #Getting the yaw angle in degrees
            yaw_degrees = float(imu_data_seperated[6])

            #Passing the orientation in quaternion dimensions
            imu_msg.orientation = self.quaternion_from_euler(0, 0, (yaw_degrees * pi / 180.0) )

            #Checking if the angular velocity in z exceeds 0.3 rad/sec or not
            if( imu_msg.angular_velocity.z <= 0.3 ):
                
                #Accurate covariance
                imu_msg.orientation_covariance = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
            else:

                #In accurate covariance in yaw angle
                imu_msg.orientation_covariance = [0.0, 0.0, 0.01, 0.0, 0.0, 0.01, 0.0, 0.0, 0.001]

            #Publishing the imu message
            self.imuPublisher.publish(imu_msg)

            #Incrementing the record counter by 1
            self.record_counter += 1
        
        else:
            
            #Do nothing
            pass

#Defining the main function
def main(args=None):

	#Initializing the ros client
    rclpy.init(args=args)
    
    #Getting node object
    node = pub_node()
    
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