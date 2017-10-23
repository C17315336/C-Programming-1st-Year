/*
	Program Description:
	The switch statement
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	10th October 2017
 */

#include <stdio.h>

int main()
{
    float num, total;

    num = 0;
    total = 0;

    while(num != 0)
    {
    	printf("\nEnter a number\n");
    	scanf("%f", &num);
    	total =  total + num;
    } // end while

    printf("\nThe total is %.1f\n", total);

    return 0;
    
} // end main




#include <stdio.h>

int main()
{
    float num, total;

    num = 0;
    total = 0;

    do
    {
    	statement1;
    	...
    	statementn;
    }
    while(condition);

    return 0;
    
} // end main






#include <stdio.h>

int main()
{
    float num, total;

    num = 0;
    total = 0;

    do
    {
    	printf("\nEnter a number\n");
    	scanf("%f"), &num;
    	total = total + num
    }
    while(num != 0);
    printf("\nThe total is %.1f\n", total);

    return 0;
    
} // end main


// Explain difference between while and do while



#include <stdio.h>

int main()
{
    float num, total;

    num = 0;
    total = 0;


    //   Exe ONCE @ start    Must be TRUE  Control loop
    for (initial.expression; condition; counter)
    {
    	statement1;
    	...
    	statementn;
    }

    return 0;
    
} // end main




#include <stdio.h>

int main()
{
    int i;

    // Display 1 - 10 on a new line
    for (i = 0; i < 11; i++)
    {
    	printf("%d\n", i);
    } // end for

    return 0;
    
} // end main





#include <stdio.h>

int main()
{
    int i;

    
    for (i = 0; i < 11; i=i+2)
    {
    	printf("%d\n", i);
    } // end for

    return 0;
    
} // end main








