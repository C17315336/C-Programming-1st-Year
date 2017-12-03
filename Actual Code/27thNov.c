/*
 Program Description:
 Using malloc() to allocate memory
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 27th November 2017
 */


// array_name[i] = *(array_name + i);

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int no_of_nums;
	int no_of_bytes;
	int i;

	// Enter number of nums
	printf("How many numbers do you want to enter?\n");
	scanf("%d", &no_of_nums);

	// Calculate the memory
	no_of_bytes = no_of_nums * sizeof(int);

	// Allocate the memory
	ptr = no_of_bytes

	// Check if memory allocated
	if (ptr == NULL)
	{
		printf("Failed to allocate\n");
	} // end if
	else
	{
		// Enter data
		for (i = 0; i < no_of_nums; ++i)
		{
			scanf("%d", & *(ptr + i));
		} // end for

		// Displaying the data
		for (i = 0; i < no_of_nums; ++i)
		{
			printf("%d\n", *(ptr+i));
		}
	} // end else

	free(ptr);

	return 0;
}

