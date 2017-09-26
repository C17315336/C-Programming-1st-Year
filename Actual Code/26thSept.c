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
    scanf("%d", &num1); // Int read
    scanf("%f", &num2); // Float read
    printf("\nYou entered %d\n", num1); // Int print
    printf("You entered %f\n", num2); // Float print

    scanf("%d %f", &num1, &num2); // Multiple reads
    
    return 0;
    
} // end main()



int main()
{
    
    float number;
    number = 0;
    
    printf("Enter a number\n");
    scanf("%f", &number); 
    printf("You entered %5.2f\n", number); // 5 is the width of the number output
    
    return 0;
    
} // end main()

