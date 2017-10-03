/*
	Program Description:
	Program that uses the if statement
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	2nd October 2017
 */

#include <stdio.h>

int main()
{
    
    float balance;

    balance = 0;

    printf("Enter your bank balance\n");
    scanf("%f", &balance);
    
    // Check if balance greater than zero
    if (balance > 0)
    {
    	printf("\nYou have money\n");
    } // end if

    // Check if balance less than zero
    if (balance < 0)
    {
    	printf("\nYou have no money\n");
    } // end if


    
    return 0;
    
} // end main






int main()
{
    
    float balance;

    balance = 0;

    printf("Enter your bank balance\n");
    scanf("%f", &balance);
    
    // Check if balance greater than zero
    if (balance > 0)
    {
    	printf("\nYou have money\n");
    } 
    else
    {
    	printf("\nYou don't have money\n");
    }

    
    return 0;
    
} // end main





int main()
{
    
    int a;
    int b;

    a = 0;
    b = 1;

    if (a == 0)
    {
    	if (b == 1)
    	{
    		printf("a is 0 and b is 1\n");
    	} // end if
    } // end if

    
    return 0;
    
} // end main




int main()
{
    
    int a;
    int b;

    a = 0;
    b = 11;

    if (a == 0)
    {
    	printf("a is 0 and b is 1\n");
    }
    else
    {
    	printf("a is 0 and b is NOT 1\n");
    }

    
    return 0;
    
} // end main


