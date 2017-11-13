/*
 Program Description:
 Array lab Q3
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 31st October 2017
 */

#include <stdio.h>
#define SIZE 4

int main()
{
    int myarray[SIZE];
    int i;
    int temp;

    
    // Entering data
    for (i = 0; i < SIZE; ++i)
    {
        scanf("%d", &myarray[i]);
    } // end for


    // Printing data
    for (i = 0; i < SIZE; ++i)
    {
        printf("%d\n", myarray[i]);
    }

    // Swoping data
    temp = myarray[0];
    myarray[0] = myarray[1];
    myarray[1] = temp;

    temp = myarray[2];
    myarray[2] = myarray[3];
    myarray[3] = temp;

    // Printing new data
    for (i = 0; i < SIZE; ++i)
    {
        printf("%d\n", myarray[i]);
    }

    
    
    
    return 0;
    
} // end main






