#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaring all the required defines for the program to run
#define STACK_SIZE 50 // Max size of the stack
#define INPUTSIZE 20  // Max size of the users input string
#define EMPTY (-1)    // Starting point of the stack

void push(char ch);     // Insert character ch on the top of the stack
char pop();             // Remove and return the top character on the stack

char elements[STACK_SIZE];  // Declaring the actual stack
int top = EMPTY;            // Creating the starting point

// void function used to insert the users input into the stack
void push(char ch)
{
    elements[++top] = ch;
}

// Char function to return the popped character and also removed the character from the stack
char pop()
{
    char find = elements[top]; // Used to temporaryly hold the character
    int idxToDel = top--;
    memmove(&elements[idxToDel], &elements[idxToDel + 1], strlen(elements) - idxToDel);
    return find;
}

int main()
{
    char input[INPUTSIZE];  // Used to hold the users stack
    char theCharacter;      // Temporary hold for the pushed character
    int i;                  // i used for the loops
    int len = 0;            // len used to hold the string length

    // Asking the user for their string input
    printf("Welcome to the stack program.\nPlease enter your sequence:");
    scanf("%s", input);

    // Calculating the lenght of the string
    len = strlen(input);

    // For loop to decide to push or pop
    for (i = 0; i < len; i++)
    {
        // If statement to decide
        if (input[i] == '*')
        {
            // Displaying the process of pop
            printf("\n Popped: %c\n", pop());
        } // end if
        else
        {
            // Displaying the process of push
            printf("\n Pushed: %c\n", input[i]);
            theCharacter = input[i];
            push( theCharacter);
        } // end else
    } // end for


    if (top != EMPTY)
    {
        // Displaying the stacks content
        printf("\n\nThe stack contents is:\n");
        // For loop to print the stack
        for (i = len; i >= 0; i--)
        {
            printf("\t%c\n", elements[i]);
        } // end for
        printf("\n\n");
        return 1;
    } // end if
    else
    {
        // Telling user the stack is empty
        printf("\n\n*** Sorry, stack is empty.\n\n");
    } // end else
    return 0;
}


