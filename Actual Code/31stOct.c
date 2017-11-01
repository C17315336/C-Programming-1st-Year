/*
 Program Description:
 Array lab Q1
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 31st October 2017
 */

#include <stdio.h>
#define SIZE 5

int main()
{
    float array1[SIZE];
    float array2[SIZE];
    int i;


    // Enter data into array one
    for (i = 0; i < SIZE; ++i)
    {
        scanf("%f", &array1[i]);
    } // end for


    // Copy data in array1 into array2
    for (i = 0; i < SIZE; ++i)
    {
        array2[i] = array1[i]
    } // end for


    // Display both arrays
    for (i = 0; i < SIZE; ++i)
    {
        printf("Array1 contains %f.    Array2 contains %f\n", Array1[i], Array2[i]);
    }
    
    
    
    return 0;
    
} // end main






