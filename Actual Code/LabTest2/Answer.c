/**********************************************************************************************************
 Program Description:
 Lab Test 2 - Pointer Notation and arrays                      SOLUTION
 
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
    float gallons[AMOUNT] = {0};
    float miles[AMOUNT] = {0};
    float mpg[AMOUNT] = {0};
    int i;

    // Asking the user for data
    printf("Enter values into gallons array\n");
    for (i = 0; i < AMOUNT; ++i)
    {
        scanf("%f", & +(gallons +i));
    } // end for

    // Asking the user for data
    printf("Enter values into miles array\n");
    for (i = 0; i < AMOUNT; ++i)
    {
        scanf("%f", & +(miles +i));
    } // end for

    // Filling the mpg array
    for (i = 0; i < AMOUNT; ++i)
    {
        *(mpg +i) = *(miles +i) / *(gallons +i);
    }

    // Printing answers
    printf("\n\nThe results of the above values are:\n");
    for (i = 0; i < AMOUNT; ++i)
    {
        printf("Calulation %d > %.8f\n", i+1, *(mpg +i));
    } // end for
    
    
    return 0;
}

