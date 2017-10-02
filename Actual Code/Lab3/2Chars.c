/*
 Program Description:
 2 characters
 
 Author:
 Eoghan Byrne
 
 Date:
 1st October 2017
 */

#include <stdio.h>

int main()
{
    
    // Creating 2 variables
    char ch1;
    char ch2;
    
    // Printing to standard output both text in a form of questions and prompts
    // as well as recieving from standard input
    printf("Please enter two characters (Note to press enter after each one)\n");
    printf("Character 1;\n");
    scanf("%1s", &ch1);
    printf("\nCharacter 2;\n");
    scanf("%1s", &ch2);
    
    
    
    // Printing out answers
    printf("\nYou have entered:\n");
    printf("%c\n", ch1);
    printf("%c\n", ch2);
    
    return 0;
    
}

