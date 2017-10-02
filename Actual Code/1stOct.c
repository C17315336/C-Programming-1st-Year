/*
	Program Description:
	Entering a single character
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	1st October 2017
 */

#include <stdio.h>

int main()
{
    
    char ch;

    printf("Enter any character\n");
    scanf("%1s", &ch); // %1s prevents input of any white space
    printf("\nYou entered %c\n", ch);


    
    return 0;
    
}



int main()
{

    /*
    getchar();
    putchar();

    Only used with single characters
    */
    
    char ch;

    printf("Enter any character\n");
    ch = getchar();
    printf("\nYou entered ");
    putchar(ch);
    
    return 0;
    
}





/* 
Conditional Statements 

if statement

if(condition)
{
    statement1;
    statement2;
    statement3;
        .
        .
        .
    statementn;
}

*/



int main()
{
    
    int bank_bal;

    bank_bal = 100;

    if (bank_bal > 0)
    {
        printf("You have money\n");
        printf("You have %d\n", bank_bal);
    }
    
    return 0;
    
}






