/*
 Program Description:
 Exam Questions
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 29th November 2017
 */

// Exam questions - DMA 2015/16

/*
(a) Write a program to dynamically allocate memory
    for a set of floating-point numbers. Your program
    must first ask the user to enter how many numbers 
    they wish to enter. It should thn dynamically
    allocate the required memory and input the numbers.
                                                        (15 marks)
(b) Write code to calculate the average of the numbers
    entered and display this to standard output.

                                                        (5 marks)
(c) Write extra code to accomodate an additional 10
    numbers in the dynamically allocated memory from
    part (a). Input these additional numbers if the
    memory increase is sucessful.
                                                        (10 marks)
 */

/*****************
    Part A
*****************/

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

        free(ptr);

    } // end else
    
    return 0;
}

                                                15 Marks
_________________________________________________________


#include <stdio.h>
#include <stdlib.h>
#define EXTRA 10

/*****************
    Part A
*****************/

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

        /*****************
            Part B
        *****************/

        // Calculating the sum
        for (i = 0; i < no_of_number; ++i)
        {
            sum = sum + *(ptr +i);
        } // end for

        // Calculating and displaying the average
        average = sum / no_of_number;
        printf("Average is %.1f\n", average);

    } // end else
    
    return 0;
}

                                                20 Marks
_________________________________________________________

#include <stdio.h>
#include <stdlib.h>
#define EXTRA 10

/*****************
    Part A
*****************/

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

        /*****************
            Part B
        *****************/

        // Calculating the sum
        for (i = 0; i < no_of_number; ++i)
        {
            sum = sum + *(ptr +i);
        } // end for

        // Calculating and displaying the average
        average = sum / no_of_number;
        printf("Average is %.1f\n", average);


        /*****************
            Part C
        *****************/
        
        // ptr = realloc(ptr, new_size);
        ptr = realloc(ptr, (no_of_number + EXTRA) * sizeof(float));

        // Checking to see if the realloc was successfull
        if (ptr == NULL)
        {
            printf("Failed to increase size of memory\n");
        } // end if
        else
        {
            for (i = no_of_number; i < no_of_number + EXTRA; ++i)
            {
                scanf("%f", &*(ptr +i))
            } // end for

            // Freeing the memory
            free(ptr);
            
        } // end else

    } // end else
    
    return 0;
}

                                                30 Marks
_________________________________________________________


