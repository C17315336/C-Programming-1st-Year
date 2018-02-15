/*
 Program Description:
 Lab 11 - Question 4
 
 Author:
 Eoghan Byrne
 
 Date:
 15th February 2018
 */

#include <stdio.h>
#define SIZE 5

// Prototype
int my_function(int[]);

int main()
{
    int numbers[SIZE];
    int i = 0;
    
    printf("Please enter in %d numbers;\n", SIZE);
    
    // Entering data
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    } // end for
    
    
    // Call highest()
    my_function(numbers);
    
    
    // Displaying data
    printf("\n\n");
    printf("Below are your new numbers;\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", numbers[i]);
    } // end for
    printf("\n");
    
    return 0;
} // end main()


// Implementing the my_function function
int my_function(int my_array[])
{
    int i = 0;
    
    // Searching the array
    for (i = 0; i < SIZE; i++)
    {
        my_array[i] = (my_array[i] * 2);
    } // end for
    
    return my_array;
} // end my_function()



