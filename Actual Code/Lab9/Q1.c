/*
 Program Description:
 Q1

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
    float *ptr;
    int no_of_number;
    int i;
    float sum = 0;
    float average = 0;


    // Asking the user to input their desired amount of numbers
    printf("How many numbers would you like to enter?\n");
    scanf("%d", &no_of_number);


    // Allocating the memory
    ptr = calloc(no_of_number, sizeof(float));


    // Checking to see if the memory allocation was successful
    if (ptr == NULL)
    {
        printf("Failed to allocate memory\n");
    } // end if
    else
    {
        // Asking for the users numbers
        printf("Please enter your numbers\n");
        for (i = 0; i < no_of_number; ++i)
        {
            scanf("%f", & *(ptr +i));
        //  scanf("%f", ptr + i);
        } // end for

        // Calculating the sum
        for (i = 0; i < no_of_number; ++i)
        {
            sum = sum + *(ptr +i);
        } // end for

        // Calculating and displaying the average
        average = sum / no_of_number;
        printf("Sum is %.1f\n", sum);
        printf("Average is %.1f\n", average);

        // ptr = realloc(ptr, new_size);
        ptr = realloc(ptr, (no_of_number + EXTRA) * sizeof(float));

        // Checking to see if the realloc was successfull
        if (ptr == NULL)
        {
            printf("Failed to increase size of memory\n");
        } // end if
        else
        {
        	// Asking for the users numbers
        	printf("Please enter your additional %d numbers\n", EXTRA);
            for (i = no_of_number; i < no_of_number + EXTRA; ++i)
            {
                scanf("%f", &*(ptr +i));
            } // end for

            // Freeing the memory
            free(ptr);

        } // end else

    } // end else

    return 0;
}






