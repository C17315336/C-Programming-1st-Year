/*
	Program Description:
	Addition and average of numbers
 
	Author:
	Eoghan Byrne
 
	Date:
	25th September 2017
 */

#include <stdio.h>

int main()
{
    // Creating the variables 1 to 5
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    int sum1;
    
    // Creating the floating point numbers
    float flo0 = 1.0;
    float flo1 = 1.1;
    float flo2 = 1.2;
    float flo3 = 1.3;
    float flo4 = 1.4;
    float flo5 = 1.5;
    float flo6 = 1.6;
    float flo7 = 1.7;
    float flo8 = 1.8;
    float flo9 = 1.9;
    float flo10 = 2.0;
    float sum2;
    float sum3 = 11;
    float sum4;
    
    
    
    // The calculation of sum of the integers
    sum1 = num1 + num2 + num3 + num4 + num5;
    
    // The calculation of the average
    sum2 = flo0 + flo1 + flo2 + flo3 + flo4 + flo5 + flo6 + flo7 + flo8 + flo9 + flo10;
    sum4 = sum2 / sum3;
    
    // Printing to standard output
    printf("The sum of 1 to 5 is: %d\n",sum1);
    printf("The average of the floating points are: %f\n",sum4);
    
    return 0;
    
}


