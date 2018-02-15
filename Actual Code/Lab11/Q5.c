/*
 Program Description:
 Lab 11 - Question 5
 
 Author:
 Eoghan Byrne
 
 Date:
 15th February 2018
 */

#include <stdio.h>
#define SIZE 5

// Prototype
void my_function(int[], char[], int*);

int main()
{
    int numbers[SIZE];
    char types[SIZE] = {'a','a','a','a','a'};
    int even = 0;
    int i = 0;
    
    printf("Please enter in %d numbers;\n", SIZE);
    
    // Entering data
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    } // end for
    
    
    // Call highest()
    my_function(numbers, types, &even);
    
    
    // Displaying data
    printf("\n\n");
    printf("Below are your array details;\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t%c\n", numbers[i], types[i]);
    } // end for
    printf("There are %d even numbers in your array\n", even);
    printf("\n");
    
    return 0;
} // end main()


// Implementing the my_function function
void my_function(int my_array1[], char my_array2[], int *ptr)
{
    int i = 0;
    
    // Searching the array
    for (i = 0; i < SIZE; i++)
    {
        if (my_array1[i] % 2 == 0)
        {
            my_array2[i] = 'E';
            (*ptr)++;
        } // end if
        else
        {
            my_array2[i] = 'O';
        }
    } // end for

} // end my_function()



