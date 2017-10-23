/*
Arrays
data_type array_name[no.of.elements];

e.g.
int ages[10];
		 dimension or size of the array

ages[0] = 18;
*/



/*
	Program Description:
	Arrays
 
	Author:
	Michael Collins
	Eoghan Byrne
 
	Date:
	10th October 2017
 */

#include <stdio.h>

int main()
{
    int ages[10];
    int i;
    int sum = 0;
    float average = 0;

    printf("Enter 10 ages\n");

    //Enter 10 ages into array
    for (i = 0; i < 10; ++i)
    {
    	scanf("%d", &ages[i]);
    } // 

    // Calculate the sum of the array
    for (i = 0; i < 10; ++i)
    {
    	sum = sum + ages[i];
    }

    // Calculate average
    average = sum / 10;
    printf("\nAverage age entered is %.1f\n", average);

    return 0;
    
} // end main






