#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import numpy as np
import cv2
from contextlib import nullcontext

class sub_node(Node):
    
    def __init__(self):

        self.flag = 0 
        self.start = 0 

        self.bridge = CvBridge()
        self.img1 = nullcontext
        self.img2 = nullcontext
        self.matches = nullcontext

        super().__init__("sub_node")
        self.create_subscription(Image,"/intel_realsense_d435_depth/image_raw",self.image_sub_callBack, rclpy.qos.qos_profile_sensor_data)
        self.get_logger().info("subscriber has started")

    def image_sub_callBack(self, msg):

        #Variables used in getting the average
        x = 0
        y = 0

        colored_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        gray_image = cv2.cvtColor(colored_image,cv2.COLOR_BGR2GRAY)

        if (self.flag == 0 and self.start == 0):
            self.img1 = np.copy(gray_image)
            self.flag = 1
        elif (self.flag == 1 and self.start == 0):
            self.img2 = np.copy(gray_image)
            self.flag = 0
            self.start = 1
        else:
            
            #Do nothing
            pass

        if self.start :
            #Initializing ORB object
            orb = cv2.ORB_create()

            #Creating matcher
            Matcher = cv2.BFMatcher(normType = cv2.NORM_HAMMING,crossCheck = True)

            orb_keypoints, orb_descriptors = orb.detectAndCompute(self.img1, None)
            orb_keypoints2, orb_descriptors2 = orb.detectAndCompute(self.img2, None)

            if orb_descriptors is not None and orb_descriptors2 is not None:
                matches = Matcher.match(queryDescriptors = orb_descriptors, trainDescriptors = orb_descriptors2)

                matches = sorted(matches, key = lambda x: x.distance)

                list_kp1 = [orb_keypoints[mat.queryIdx].pt for mat in matches] 
                list_kp2 = [orb_keypoints2[mat.trainIdx].pt for mat in matches]

                for i in range(len(list_kp1)):
                    x+=(int (list_kp1[i][0]) -int (list_kp2[i][0]))
                    y+=(int (list_kp1[i][1]) -int (list_kp2[i][1]))

                if len(list_kp1) :    
                    x/=len(list_kp1)
                    y/=len(list_kp1)


                #Creating arrow with green color
                color = (0, 255, 0) 
                thickness = 8
                input_image_height, input_image_width = gray_image.shape

                #Start and end points
                start_point = (int (input_image_width/2), int(input_image_height/2))       
                end_point = (int(input_image_width/2) + int(x*5), int(input_image_height/2) + int(y*5))    

                #Drawing arrow over the image
                image = cv2.arrowedLine(colored_image, start_point, end_point, color, thickness)

                self.img1=np.copy(self.img2) 
                self.img2=np.copy(gray_image) 

                if gray_image is not None:
                    cv2.imshow("My_Image", image)
 
        if (cv2.waitKey(1) & 0xff) == ord('q'):
            cv2.destroyAllWindows()  

def main (args=None):
    rclpy.init(args=args)
    node = sub_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
