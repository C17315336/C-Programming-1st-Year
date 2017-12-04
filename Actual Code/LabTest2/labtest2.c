/**********************************************************************************************************
 Program Description:
 Lab Test 2 - Pointer Notation and Arrays
 
 1. Enter values into the gallons array and miles array.
 2. Calculate and fill the mpg array using the values contained in the gallons
 array and miles array with the formula:
 mpg = miles / gallons
 3. Display the contents of the mpg array
 
 
 Author:
 Eoghan Byrne
 C17315336
 
 Editor Used:                           Compiler Used:
 Sublime Text                           Xcode
 Version 3.0                            Version 9.1
 
 Created:
 4th December 2017
 **********************************************************************************************************/

// Memory aid
// array.name[i] = *(array.name +i)

#include <stdio.h>
#include <stdlib.h>
#define AMOUNT 5 // Using a define to allow easy changing of array values

int main()
{
    // Declaring the 3 arrays as per program description
    // Initialsing all to zero
    float gallons[AMOUNT] = {0};
    float miles[AMOUNT] = {0};
    float mpg[AMOUNT] = {0};
    int i;
    
    
    // Initialsing i to zero
    i = 0;
    
    
    /************************************************
     Asking for user input
     ************************************************/
    
    // Asking the user to input 5 values into the gallons array
    printf("Please enter 5 values for the amount of gallons\n");
    for (i = 0; i < AMOUNT; ++i)
    {
        printf("Value %d >\t", i+1);
        scanf("%f", &gallons[i]);
    } // end for
    
    // Asking the user to input 5 values into the miles array
    printf("\n\nPlease enter 5 values for the amount of miles\n");
    for (i = 0; i < AMOUNT; ++i)
    {
        printf("Value %d >\t", i+1);
        scanf("%f", &miles[i]);
    } // end for
    
    
    
    /************************************************
     Calculating Section
     ************************************************/
    
    // Calculating the values of mpg and inserting them into the array
    for (i = 0; i < AMOUNT; ++i)
    {
        *(mpg +i) = *(miles +i) / *(gallons +i);
    } // end for
    
    
    /************************************************
     Displaying data to user
     ************************************************/
    
    // Displaying the contents of the mpg array
    printf("\n\nThe results of the above values are:\n");
    for (i = 0; i < AMOUNT; ++i)
    {
        printf("Calulation %d > %.8f\n", i+1, *(mpg +i));
    } // end for
    
    
    return 0;
}

