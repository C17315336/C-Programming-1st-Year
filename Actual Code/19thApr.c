/*
	Q3 2017
	DMA
	Structures
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Assume whole numbers entered only
	int *ptr;
	int *tmp;
	int i;
	int high;
	int low;
	int no_in_set;
	int extra;

	// Asking for the users input for memory allocation
	printf("How many numbers in your set?\n");
	scanf("%d", &no_in_set);

	// Allocating memory block
	ptr = calloc(no_in_set, sizeof(int));

	// Checking to confirm memory allocation worked
	if (ptr == NULL)
	{
		printf("Failed to allocate memory\n");
	} // end if
	else
	{
		// Asking the user to enter their numbers into the memory block
		printf("Please enter your numbers:\n");
		for (i = 0; i < no_in_set; i++)
		{
			scanf("%d", &*(ptr + i));
		}

		// Check for highest and lowest numbers
		high = 0;
		low = (*ptr + 0);
		for (i = 0; i < no_in_set; i++)
		{
			if (high < (*ptr + i))
			{
				high = (*ptr + i)
			} // end if

			if (low > (*ptr + i))
			{
				low = (*ptr + i)
			} // end if
		} // end for

		printf("Highest: %d\nLowest: %d\n", high, low);

		

		/******		Part B 		******/
		printf("\n\nHow many extra numbers?\n");
		scanf("%d", &extra);

		tmp = ptr;

		ptr = realloc(ptr, (no_in_set * sizeof(int))+(extra * sizeof(int)));

		if (ptr == NULL)
		{
			printf("Failed to expand memory\n");
		} // end if
		else
		{
			printf("Please enter your numbers:\n");
			for (i = no_in_set; i < no_in_set+extra; i++)
			{
				scanf("%d", &*(ptr + i));
			}
		}

		// Free memory
		free(ptr);
	} // end else

	return 0;
} // end main