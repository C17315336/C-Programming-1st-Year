/*
 Program Description:
 Lab 12 - Question 4
 
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

// Declaring prototypes
void concatenate(char[INPUT]);
void lenght(char[INPUT]);


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
    
    concatenate(user1);
    lenght(user1);
    
    return 0;
} // end main()

void concatenate(char user[INPUT])
{
    char text[INPUT];
    
    strcpy(text, "First word entered is ");
    
    strcat(text, user);
    
    printf("\n\n%s\n\n", text);
}


void lenght(char user[INPUT])
{
    int lenght = 0;
    lenght = strlen(user) + 22;
    
    printf("The length of the string is %d\n", lenght);
}




