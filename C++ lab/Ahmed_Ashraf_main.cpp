/**
 * @file    Ahmed_Ashraf_main.cpp
 * @author  Ahmed Ashraf (ahmedashrafelnaqeeb@gmail.com)
 * @brief   This file contains cpp lab tasks required, Just enter the task number to get its results
 * @version 1.0
 * @date    2021-04-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/******************************************************************************************************************************/
/*                                                   Includes & namespaces                                                    */ 
/******************************************************************************************************************************/

#include "iostream"

/*Standard namespace*/
using namespace std;

/******************************************************************************************************************************/
/*                                                        CPP Tasks                                                           */ 
/******************************************************************************************************************************/

/**
 * @brief Task function no.1
 * 
 */
void task1_func(void)
{
    /*Local variable used to get the entered number*/
    unsigned int num;

    /*Printing the enter number message*/
    cout << "Enter your favorite number between 1 and 100: ";
    
    /*Getting the entered number*/
    cin >> num;

    /*Checking if the number the user entered is between 1 and 100 or not*/
    if(num >= 1 && num <= 100)
    {
        /*Prompting the user that the number he/she entered is my favorite too*/
        cout << "Amazing!! That's my favorite number too!" << endl;
        cout << "No really!! " << num << " is my favorite number!" << endl;
    }
    else
    {
        /*Prompting that it's not my favorite number*/
        cout << "Sorry but this isn't my favorite number" << endl;
    }
    
    /*Return from this function*/
    return;
}

/**
 * @brief Task function no.2
 * 
 */
void task2_func(void)
{
    /*Local variable used to get a number from user*/
    unsigned int num; 

    /*Asking the user to enter an integer number*/
    cout << "Enter an integer: ";

    /*Getting the number from user*/
    cin >> num;

    /*Printing the revrsed number*/
    cout << "Reversed number = ";

    /*looping over the number to get its size*/
    while(num != 0)   
    {
        /*Printing the number in reversed order*/
        cout << num % 10;

        /*Dividing the number by 10*/
        num /= 10;
    }

    /*Printing new line*/
    cout << endl;

    /*Return from this function*/
    return;
}

/**
 * @brief Task function no.3
 * 
 */
void task3_func(void)
{
    /*Local array with 5 elements initialized by zero*/
    int arr[5] = {0};

    /*Local pointer used to point at array elements*/
    int *arr_ptr;

    /*Local variable used in looping operations*/
    unsigned int looping_var = 0;

    /*Asking the user to enter array elements*/
    cout << "Enter elements: ";

    /*Looping over array elements*/
    for(looping_var = 0 ; looping_var < 5 ; looping_var++)
    {
        /*Getting elements from user*/
        cin >> arr[looping_var];
    }
    
    /*Getting the address of the array first element*/
    arr_ptr = arr;

    /*Printing the array elements*/
    cout << "You entered: " << endl;

    /*Looping over array elements*/
    for(looping_var = 0 ; looping_var < 5 ; looping_var++)
    {   
        /*Printing the array elements by using pointer*/
        cout << (*arr_ptr) + looping_var << endl;
    }

    /*Return from this function*/
    return;
}

/**
 * @brief Task function no.4
 * 
 */
void task4_func(void)
{
    /*Local variable used to carry a length of an array*/
    unsigned int arr_length;

    /*Local variable used in looping operations*/
    unsigned int looping_var;

    /*Local variable used to get maximum number*/
    unsigned int max = 0;

    /*Local array used to carry user input elements*/
    unsigned int arr[50] = {0};

    /*Asking the user to enter the total number of array elements*/
    cout << "Enter total number of elements(1 to 100): ";

    /*Getting the length of the array elements*/
    cin >> arr_length;

    /*Looping over array elements*/
    for(looping_var = 0 ; looping_var < arr_length ; looping_var++)
    {
        /*Entering numbers from user*/
        cout << "Enter number " << (looping_var + 1) << " : ";
        
        /*Getting the number from user*/
        cin >> arr[looping_var];

        /*Checking if the entered number is the maximum or not*/
        if(max < arr[looping_var])
        {   
            /*Setting the maximum variable to the entered variable*/
            max = arr[looping_var];
        }
        else
        {
            /*Do nothing*/
        }
    }

    /*Printing the maximum number*/
    cout << "Largest element = " << max << endl;

    /*Return from this function*/
    return;
}

/**
 * @brief Task function no.5
 * 
 */
void task5_func(void)
{
    /*Local variable used to carry a length of an array*/
    unsigned int arr_length;

    /*Local variable used in looping operations*/
    unsigned int looping_var;

    /*Local variable used to get the sum of the elements*/
    unsigned int sum = 0;

    /*Local array used to carry user input elements*/
    unsigned int arr[50] = {0};

    /*Asking the user to enter the total number of array elements*/
    cout << "Enter number of data: ";

    /*Getting the length of the array elements*/
    cin >> arr_length;

    /*Looping over array elements*/
    for(looping_var = 0 ; looping_var < arr_length ; looping_var++)
    {
        /*Entering numbers from user*/
        cout << (looping_var + 1) << ". " << "Enter number: ";
        
        /*Getting the number from user*/
        cin >> arr[looping_var];

        /*Getting the sum of entered elements*/
        sum += arr[looping_var];
    }

    /*Printing the average of the entered elements*/
    cout << "Average = " << (sum / arr_length) << endl;

    /*Return from this function*/
    return;
}

/**
 * @brief Task function no.6
 * 
 */
void task6_func(void)
{
    /**
     * @brief Class data type used to get the sum of two integers
     * 
     */
    class int_sum
    {
        /*Public variables*/
        public:

            /*Class constructor*/
            int_sum(int _num1, int _num2)
            {
                /*Telling the user that the numbers are initialized*/
                cout << "Numbers initialized." << endl;

                /*Printing the sum of the two entered numbers*/
                cout << "The addition result is: " << (_num1 + _num2) << endl;
            }
    };

    /*Local variables used to carry entered numbers from user*/
    int num1, num2;

    /*Asking the user to enter the first number*/
    cout << "Enter first number : ";

    /*Getting the first number*/
    cin >> num1;

    /*Asking the user to enter the second number*/
    cout << "Enter second number : ";

    /*Getting the second number*/
    cin >> num2;

    /*Creating an object from int_sum class*/
    int_sum two_numbers(num1 , num2);

    /*Return from this function*/
    return;
}

/**
 * @brief Task function no.7
 * 
 */
void task7_func(void)
{
    /**
     * @brief Class data type used make object of complex numbers
     * 
     */
    class complex_num
    {
        /*Public variables*/
        public:

            /*Class constructor*/
            complex_num(int _real_num1, int _img_num1, int _real_num2, int _img_num2)
            {
                /*Printing the sum of real numbers*/
                cout << "The sum of real parts is: " << (_real_num1 + _real_num2) << endl;

                /*Printing the sum of complex numbers*/
                cout << "The sum of imaginary parts is: " << (_img_num1 + _img_num2) << endl;
            }
    };

    /*Local variables used to carry entered complex numbers from user*/
    int real_num1, img_num1, real_num2, img_num2;

    /*Asking the user to enter the first number*/
    cout << "First number -> " << endl;
    
    /*Getting the real part*/
    cout << "Enter the real part: ";
    cin >> real_num1;

    /*Getting the imaginary part*/
    cout << "Enter the imaginary part: ";
    cin >> img_num1;

    /*Asking the user to enter the second number*/
    cout << "Second number -> " << endl;
    
    /*Getting the real part*/
    cout << "Enter the real part: ";
    cin >> real_num2;

    /*Getting the imaginary part*/
    cout << "Enter the imaginary part: ";
    cin >> img_num2;

    /*Making an object of complex_num class and sum two numbers*/
    complex_num cmplx_number_sum(real_num1, img_num1, real_num2, img_num2);

    /*Return from this function*/
    return;
}

/******************************************************************************************************************************/
/*                                                        Main function                                                       */ 
/******************************************************************************************************************************/

/**
 * @brief  Main function used as the entry point to the program
 * 
 * @return int: If 0 returned the program is terminated successfully
 */
int main(void)
{
    /*Local variable used to hold the task number*/
    unsigned int task_num;

    /*Asking the user to enter the task number*/
    cout << "Please enter the task number: ";

    /*Getting the task number that will be entered*/
    cin >> task_num;

    /*Switching over tasks*/
    switch(task_num)
    {
        /*In case of task 1*/
        case 1:
            
            /*Execute task1 code*/
            task1_func();

            /*Break from this case*/
            break;

        /*In case of task 2*/
        case 2:
            
            /*Execute task2 code*/
            task2_func();

            /*Break from this case*/
            break;

        /*In case of task 3*/
        case 3:
            
            /*Execute task3 code*/
            task3_func();

            /*Break from this case*/
            break;

        /*In case of task 4*/
        case 4:
            
            /*Execute task4 code*/
            task4_func();

            /*Break from this case*/
            break;

        /*In case of task 5*/
        case 5:
            
            /*Execute task5 code*/
            task5_func();

            /*Break from this case*/
            break;

        /*In case of task 6*/
        case 6:
            
            /*Execute task6 code*/
            task6_func();

            /*Break from this case*/
            break;

        /*In case of task 6*/
        case 7:
            
            /*Execute task6 code*/
            task7_func();

            /*Break from this case*/
            break;

        default:

            /*In case the entered task number isn't correct*/
            cout << "Invalid task number" << endl;
    }

    /*Return from this function by 0*/
    return 0;
}