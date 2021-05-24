'''
Author: Ahmed Ashraf
Version: v1.0
Description: This file contains the lab solution for velocity data manipulation
'''

#The entry point of the code
def main(args=None):
    
    #Variable used in speed calculation
    speed = 0.0

    #Opening the velocity data file
    dataFile = open("python_test_file.txt", 'r')

    #Creating new file to write new data in it
    new_dataFile = open("new_python_test_file.txt", 'w')
    
    #Seperating each data record by new line '\n' character
    dataFile_seperated = dataFile.read().split('\n')

    #Checking the end of file
    for recordData in dataFile_seperated:
        
        #Checking the end of the file
        if(recordData != ''):

            #Getting the velocity data
            velocityRecord = recordData.split(",")[-3:]
            
            #Checking if the velocity data is empty or not
            if(velocityRecord[0] != "        "):

                #Calculating speed variable
                speed = (float(velocityRecord[0]) ** 2) + (float(velocityRecord[1]) ** 2) + (float(velocityRecord[2]) ** 2)
                
                #Writing new line including the speed data in the new file
                new_dataFile.write(recordData + ",speed,   " + str(speed))

                #Writing new line
                new_dataFile.write('\n')
    
    #Closing the new file
    new_dataFile.close()

#Making sure that this file is called
if __name__ == "__main__":
    
    #Calling main function
    main()