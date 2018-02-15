/*
 Program Description:
 Lab 11 - Question 3
 
 Author:
 Eoghan Byrne
 
 Date:
 15th February 2018
 */

#include <stdio.h>
#define SIZE 5

// Prototype
float calc_avg(int[]);

int main()
{
    int numbers[SIZE];
    float avg = 0;
    int i = 0;
    
    printf("Please enter in %d numbers;\n", SIZE);
    
    // Entering data
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    } // end for
    
    // Call calc_avg()
    avg = calc_avg(numbers);
    
    // Displaying the output
    printf("The average of the array is %.1f\n", avg);
    
    return 0;
} // end main()


// Implementing the calc_avg function
float calc_avg(int my_array[])
{
    int sum = 0;
    int i = 0;
    float average = 0;
    
    for (i = 0; i < SIZE; i++)
    {
        sum = sum + my_array[i];
    } // end for
    
    average = (float)sum/SIZE;
    
    return average;
} // end calc_avg()
