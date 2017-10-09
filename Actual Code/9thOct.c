/*
	Program Description:
	The switch statement
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	9th October 2017
 */

#include <stdio.h>

int main()
{
    char operator;
    
    operator = '_';

    printf("Enter a mathemaical operator\n");
    scanf("%c", &operator); // operator = getchar();

    // State the switch statement
    switch(operator)
    {
    	case'+':
    	{
    		printf("\nYou entered ADDITION\n");
    		break;
    	} // end case '+'
    	case'-':
    	{
    		printf("\nYou entered SUBTRACTION\n");
    		break;
    	} // end case '-'
    	case'/':
    	{
    		printf("\nYou entered DIVISION\n");
    		break;
    	} // end case '/'
    	case'*':
    	{
    		printf("\nYou entered MULTIPLICATION\n");
    		break;
    	} // end case '*'
    	default;
    	{
    		printf("\nInvalid mathemaical operator\n");
    	} // end default
    } // end switch

    
    return 0;
    
} // end main



/* 
	Iteration (Loops)
	1. The While Loop

	while(condition)
	{
		statement1;
		...
		statementn;
	}

	2. 
*/

int main1()
{
    float number;
    float total;

    number = 10;
    total = 0;

    //while number not equal to 0
    while(number != 0)
    {
    	printf("\nEnter a number\n");
    	scanf("%f"), &number;

    	total = total + number;
    } // end while

    printf("\nThe sum of the numbers is %.1f\n", total);

    
    return 0;
    
} // end main










