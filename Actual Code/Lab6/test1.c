/*
 Program Description:
 Lab Test 1
 Fibonacci Series
 
 Compiler Used:
 Xcode Version 9.0.1
 
 Author:
 Eoghan Byrne
 
 Date:
 23rd October 2017
 */

#include <stdio.h>

int main()
{
    // Declaring all the variables required
    int userin;
    int i;
    int counter;
    int outcome;
    
    
    // Initilizing all the required variables
    userin = 0;
    i = 0;
    counter = 1;
    outcome = 0;
    
    
    // Asking the user to input their desired number
    printf("Fibonacci Series\nEnter the positive number of terms in the series you would like to display;\n");
    scanf("%d", &userin);
    printf("\n");
    
    
    // Creating array after variable being intilized but also after the users input
    int series[userin];

    // Set first in array as 1
    series[i] = 1;

    
    // Loop to calculate the series
    /*
    Could not calculate formula correctly
    */
    for (i = 0; i < userin; ++i)
    {
        outcome = outcome + counter;
        series[i] = outcome;                // Placing the outcome into the array
        counter++;
    } // end for
    
    
    // Loop to display the series
    for (i = 0; i < userin; ++i)
    {
        printf("%d\n", series[i]);          // Displaying the array content
    } // end for
    
    
    return 0;
    
} // end main



