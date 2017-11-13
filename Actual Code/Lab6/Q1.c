/*
 Program Description:
 Q1
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 6th November 2017
 */

#include <stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE];
    int i = 0;
    
    for (i = 0; i < SIZE; i++)
    {
        a[i] = 9 - i;
    }
    for (i = 0; i < SIZE; i++)
    {
        a[i] = a[ a[i] ];
    }
    
    
    // Enter data into array one
    printf("Data entered is %d\n", a[8]);
    
    
    
    return 0;
    
} // end main



