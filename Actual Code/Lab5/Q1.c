/*
	Program Description:
	10 to 1 decreasing with no comma at the end
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	16th October 2017
 */

#include <stdio.h>

int main()
{
    int counter;

    counter = 10;

    while(counter > 0)
    {
    	if (counter != 1)
    	{
    		printf("%d,", counter);
    	}
    	else
    	{
    		printf("%d", counter);
    	}
    	counter--;
    } // end while

    return 0;
    
} // end main






