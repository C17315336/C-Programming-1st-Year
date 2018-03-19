/*
 Program Description:
 Lab 12 - Question 3
 
 Author:
 Eoghan Byrne
 
 Date:
 8th March 2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIST 30
#define INPUT 50

int main()
{
    const char user1[INPUT];
    const char user2[INPUT];
    char *found;
    
    printf("Please enter your first word:\n");
    gets(user1);

    printf("\n\nPlease enter your second word:\n");
    gets(user2);
    
    found = strstr(user1, user2);
    
    if (found != NULL)
    {
        printf("\n\nYour words of %s and %s MATCHED!\n", user1, user2);
    }
    else
    {
        printf("\n\nYour words didn't match!\n");
    }
    
    return 0;
} // end main()





