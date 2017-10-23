/*
	Program Description:
	Steps from a number
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	16th October 2017
 */

#include <stdio.h>

int main()
{
    int number;
    int counter;

    number = 0;
    counter = 0;

    printf("Enter any positive number\n");
    scanf("%d", &number);

    do
    {
        if (number %2 == 0)
        {
            number = number/2;

        }
        else
        {
            number = (number * 3) + 1;
        }
        counter ++;
    }
    while(number != 1);

    printf("Number of steps performed %d\n", counter);

    return 0;
    
} // end main






