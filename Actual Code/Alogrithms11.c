#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaring all the required defines for the program to run
#define QUEUE_SIZE 50 // Max size of the queue
#define INPUTSIZE 20  // Max size of the users input string
#define EMPTY (-1)    // Starting point of the queue

void enqueue(char ch);     // Insert character ch on the top of the queue
char dequeue();             // Remove and return the top character on the queue

char elements[QUEUE_SIZE];  // Declaring the actual queue
int top = EMPTY;            // Creating the starting point

// void function used to insert the users input into the queue
void enqueue(char ch)
{
    elements[++top] = ch;
}

// Char function to return the dequeueed character and also removed the character from the queue
char dequeue()
{
    char find = elements[top]; // Used to temporaryly hold the character
    int idxToDel = top--;
    memmove(&elements[idxToDel], &elements[idxToDel + 1], strlen(elements) - idxToDel);
    return find;
}

int main()
{
    char input[INPUTSIZE];  // Used to hold the users queue
    char theCharacter;      // Temporary hold for the enqueued character
    int i;                  // i used for the loops
    int len = 0;            // len used to hold the string length

    // Asking the user for their string input
    printf("Welcome to the queue program.\nPlease enter your sequence:");
    scanf("%s", input);

    // Calculating the lenght of the string
    len = strlen(input);

    // For loop to decide to enqueue or dequeue
    for (i = 0; i < len; i++)
    {
        // If statement to decide
        if (input[i] == '*')
        {
            // Displaying the process of dequeue
            printf("\n dequeued: %c\n", dequeue());
        } // end if
        else
        {
            // Displaying the process of enqueue
            printf("\n enqueued: %c\n", input[i]);
            theCharacter = input[i];
            enqueue( theCharacter);
        } // end else
    } // end for


    if (top != EMPTY)
    {
        // Displaying the queues content
        printf("\n\nThe queue contents is:\n");
        // For loop to print the queue
        for (i = len; i >= 0; i--)
        {
            printf("\t%c\n", elements[i]);
        } // end for
        printf("\n\n");
        return 1;
    } // end if
    else
    {
        // Telling user the queue is empty
        printf("\n\n*** Sorry, queue is empty.\n\n");
    } // end else
    return 0;
}


