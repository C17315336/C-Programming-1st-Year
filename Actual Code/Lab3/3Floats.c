/*
 Program Description:
 3 seperate float inputs
 
 Author:
 Eoghan Byrne
 
 Date:
 1st October 2017
 */

#include <stdio.h>

int main()
{
    
    // Creating 3 variables and initilizing them to 0
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    
    // Printing to standard output both text in a form of questions and prompts
    // as well as recieving from standard input
    printf("Please enter three decimal numbers (Note to press enter after each one)\n");
    printf("Number 1;\n");
    scanf("%f", &num1);
    printf("\nNumber 2;\n");
    scanf("%f", &num2);
    printf("\nNumber 3;\n");
    scanf("%f", &num3);
    printf("\nYou have entered:\n %.4f\n %.3f\n %.0f\n", num1, num2, num3);
    
    return 0;
    
}
