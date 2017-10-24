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
    int x = 0;
    int y = 0;
    int temp = 0;
    int i = 0;
    int term_number = 0;


    // Enter the number of terms in the sequences to display
    printf("Enter your upper range number in the sequences\n");
    scanf("%d", &term_number);

    // Display all numbers in the sequence up to this number
    x = 1;

    printf("0,\n");

    for (i = 0; i < term_number; ++i)
    {
        temp = x + y;
        x = y;
        y = temp;

        // The value of variables temp displays the next number in the sequence
        printf("%d\n", temp);
    } // end for
    
    
    return 0;
    
} // end main



