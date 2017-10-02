/*
	Program Description:
	3 seperate number inputs
 
	Author:
	Eoghan Byrne
 
	Date:
	1st October 2017
 */

#include <stdio.h>

int main()
{
 
 	// Creating 3 variables and initilizing them to 0   
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    // Printing to standard output both text in a form of questions and prompts
    // as well as recieving from standard input
    printf("Please enter three integers (Note to press enter after each one)\n");
    printf("Number 1;\n");
    scanf("%d", &num1);
    printf("\nNumber 2;\n");
    scanf("%d", &num2);
    printf("\nNumber 3;\n");
    scanf("%d", &num3);
    printf("\nYou have entered:\n %d\n %d\n %d\n", num1, num2, num3);

    return 0;
    
}
