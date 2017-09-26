/*
	Program Description:
	Standard input
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	26th September 2017
 */

#include <stdio.h>

int main()
{
    /* Uses scanf(); */
    
    int num;
    num = 0;
    
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("\nYou entered %d\n", num);
    
    return 0;
    
} // end main()



int main()
{
    /* Uses scanf(); */
    
    int num1;
    float num2;
    num1 = 0;
    num2 = 0;
    
    printf("Enter a number\n");
    scanf("%d", &num1);
    scanf("%f", &num2);
    printf("\nYou entered %d\n", num1);
    printf("You entered %f\n", num2);
    
    return 0;
    
} // end main()


