/*
	Program Description:
	1-5 but output 1-20 evenly 
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	16th October 2017
 */

#include <stdio.h>

int main()
{
    int value;
    int counter;

    value = 0;
    counter = 1;

    printf("Enter a number between 1-5\n");
    do
    {
        scanf("%d", &value);
        if (value < 1 || value > 5)
        {
            printf("Error. Enter another number\n");
        }
    }
    while(value < 1 || value > 5);

    do
    {
        if (value %counter == 0)
        {
            printf("%d evenly divisible by %d\n", value, counter);
        }
        counter++;
    }
    while(counter < 21);

    return 0;
    
} // end main






