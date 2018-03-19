/*
 Program Description:
 Lab 12 - Question 1 - Part 1
 
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
    const char user[INPUT];
    const char lists[] = "EoghanJohnMichael";
    char *found;
    
    printf("Please enter your name:\n");
    gets(user);
    
    found = strstr(lists, user);
    
    if (found != NULL)
    {
        printf("\n\nWelcome %s!\n", user);
    }
    else
    {
        printf("\n\nName not found!\n");
    }
    
    return 0;
} // end main()





