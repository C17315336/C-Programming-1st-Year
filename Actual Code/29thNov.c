/*
 Program Description:
 Exam Questions
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 29th November 2017
 */

/*
 Q.3
 (a) You are a software developer and asked to develop
 a program that allows a user to enter a set of numbers.
 The user decide the size of the set when the
 program runs. Your program must find the highest
 and lowest number in the set and display both to
 standard output. Ignore any error-checking.                 22 Marks
 (b) Show how you would modify the program (a) to
 enable the user to enter a different size set of
 numbers                                                     10 Marks
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int no_in_set;
    int highest, lowest;
    int new_set;
    char usr;
    int i;
    
    
    // Asking user of how many numbers they want to enter
    printf("How many numbers do you want to enter?\n");
    scanf("%d", &no_in_set);
    
    
    // Allocating the memory
    ptr = calloc(no_in_set, sizeof(int));
    // (int *)calloc();
    
    
    // Checking the memory allocation
    if (ptr == NULL)
    {
        // Telling user that the memory allocation failed
        printf("Failed to find space!\nSorry\n");
        
    }
    else
    {
        // Enter data (numbers in set)
        printf("\nPlease enter your numbers;");
        for (i = 0; i < no_in_set; ++i)
        {
            scanf("%d", & *(ptr +i));
        } // end for
        
        
        // Setting the highest and lowest number
        highest = *ptr;
        lowest = *(ptr + 0);
        
        
        // Finding the highest and lowest number
        for (i = 0; i < no_in_set; ++i)
        {
            if (highest < *(ptr + i))
            {
                highest = *(ptr + i);
            }
            if (lowest > *(ptr + i))
            {
                lowest = *(ptr + i);
            }
        }
        
        
        // Displaying data to user
        printf("\nYou entered:\n");
        for (i = 0; i < no_in_set; ++i)
        {
            printf("%d\n", *(ptr + i));
        }
        printf("\nYour highest number was:\t%d\nYour lowest number was:\t\t%d\n", highest, lowest);
        
        
        /* Part B Code would start here */
        /*
        
        // Asking user for new number
        printf("How many numbers do you want to add?\n");
        scanf("%d", &new_set);
        
        // Reallocating the memory uing ralloc()
        ptr = realloc(ptr, new_set * sizeof(int));
        
        // Accepting new input
        if (ptr == NULL)
        {
            // Copy of the user input section of Section A
        }
    
        */
        
        free(ptr);
        
    } // end else
    
    return 0;
}




