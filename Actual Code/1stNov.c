/*
 Program Description:
 Array lab Q2
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 1st November 2017
 */

#include <stdio.h>
#define SIZE 5

int main()
{
    int array1[SIZE];
    int array2[SIZE];
    int i;

    
    // Enter data into array1
    for (i = 0; i < SIZE; ++i)
    {
        scanf("%d", &array1[i]);
    }
    

    // Copy contents of array1 into array2
    for (i = 0; i < SIZE; ++i)
    {
        array2[i] = array1[i];
    }

    
    return 0;
    
} // end main






