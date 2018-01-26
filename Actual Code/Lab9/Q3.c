/*
 Program Description:
 Q3
 
 Author:
 Eoghan Byrne
 
 Date:
 25th January 2018
 */

#include <stdio.h>
#include <stdlib.h>
#define EXTRA 10

int main()
{
    float *ptr1;
    float *ptr2;
    int no_of_number = 5;
    int i;
    float sum = 0;
    float average = 0;
    
    /*
     // Asking the user to input their desired amount of numbers
     printf("How many numbers would you like to enter?\n");
     scanf("%d", &no_of_number);
     */
    
    
    // Allocating the memory
    ptr1 = calloc(no_of_number, sizeof(float));
    
    
    // Checking to see if the memory allocation was successful
    if (ptr1 == NULL)
    {
        printf("Failed to allocate memory\n");
    } // end if
    else
    {
        // Asking for the users numbers
        printf("Please enter your numbers\n");
        for (i = 0; i < no_of_number; ++i)
        {
            scanf("%f", & *(ptr1 +i));
            //  scanf("%f", ptr + i);
        } // end for
        
        // Calculating the sum
        for (i = 0; i < no_of_number; ++i)
        {
            sum = sum + *(ptr1 +i);
        } // end for
        
        // ptr = realloc(ptr, new_size);
        ptr2 = calloc(1, sizeof(float));
        
        // Checking to see if the realloc was successfull
        if (ptr2 == NULL)
        {
            printf("Failed to allocate memory\n");
        } // end if
        else
        {
            // Calculating the average
            *(ptr2) = sum / no_of_number;
            
            // Displaying the floats and the average
            printf("You entered:\n");
            for (i = 0; i < no_of_number; ++i)
            {
                printf("%.1f\n", *(ptr1 +i));
            }
            
            printf("\n\nAverage is %.1f\n", *(ptr1));
            
            // Freeing the memory
            free(ptr1);
            free(ptr2);
            
        } // end else
        
        // Freeing the memory
        //free(ptr);
        
    } // end else
    
    return 0;
}







