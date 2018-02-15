/*
 Program Description:
 Lab 11 - Question 2
 
 Author:
 Eoghan Byrne
 
 Date:
 15th February 2018
 */

#include <stdio.h>
#define SIZE 5

// Prototype
int highest(int[]);

int main()
{
    int numbers[SIZE];
    int high = 0;
    int i = 0;
    
    printf("Please enter in %d numbers;\n", SIZE);
    
    // Entering data
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    } // end for
    
    
    // Call highest()
    high = highest(numbers);
    
    // Displaying the highest number
    printf("The largest number of the array is %d\n", high);
    
    return 0;
} // end main()


// Implementing the highest function
int highest(int my_array[])
{
    int most = my_array[0];
    int i = 0;
    
    // Searching the array
    for (i = 0; i < SIZE; i++)
    {
        if (my_array[i] > most)
        {
            most = my_array[i];
        } // end if
    } // end for
    
    return most;
} // end highest()


