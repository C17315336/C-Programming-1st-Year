/*
 Program Description:
 Using calloc() to allocate memory
 Using ralloc() to reallocate memory
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 28th November 2017
 */

// array_name[i] = *(array_name + i)

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int no_of_nums;
	char user_input;
	int extra;
	int *temp;
	int i;

	printf("How many numbers do you want to enter?\n");
	scanf("%d", &no_of_nums);

	//Allocate the memory
	ptr = calloc(no_of_nums, sizeof(int));

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

		// Asking the user if they want to enter more numbers
		printf("Enter more numbers? Y/N\n");
		// scanf("%c", &user_input);
		// user_input = getchar();
		scanf("%c", &user_input);

		// Checking user input
		if (user_input == 'Y')
		{
			printf("How many more numbers do you want to enter?\n");
			scanf("%d", extra);

			// Saving previous ptr
			temp = ptr;

			// Reallocate the memory block
			ptr = realloc(ptr, (no_of_nums + extra)*sizeof(int));

			// Checking reallocation
			if (ptr == NULL)
			{
				printf("Failed to allocate\n");
			}
			else
			{
				/* -- Code -- */
			}
		}
		else

	} // end else



	/*************************************
		New size of the TOTAL SIZE of
			the block in Bytes
	*************************************/
	// realloc()
	ptr = realloc(ptr, new_size)

	return 0;
}





