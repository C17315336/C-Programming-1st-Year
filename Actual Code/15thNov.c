/*
 Program Description:
 Pointers
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 15th November 2017
 */


/*

	Subscripting       Pointer notation
	a[0]    ----->     *(a + 0)
	a[1]    ----->     *(a + 1)
	a[2]    ----->     *(a + 2)
	a[3]    ----->     *(a + 3)
	a[4]    ----->     *(a + 4)
	a[5]    ----->     *(a + 5)

	--------------------

	Program that uses pointer notation 
	to access an array

	--------------------

	WRITE THIS IN EXAMS
	array.name[i] = *(array.name + i)

	--------------------

	Arrays can ONLY be set a run time

	--------------------

	Dynamic Memory Allocation (DMA)

	> malloc() - memory allocation
	  pointer = malloc(SIZE)
	     ^			^
	  a Pointer    The TOTAL size of
	  variable     allocated block of
	  that         memory in BYTES
	  stores the
	  address of
	  the
	  start of
	  the
	  allocated
	  block of
	  memory

	> int *ptr;
	  ptr = malloc(40);

	> 4 Bytes for 1 interager

	> sizeof(int)

*/



#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE] = {2,4,6,8,10};
    int i;

    // Displaying contents
    for (i = 0; i < SIZE; ++i)
    {
    	printf("\n Element %d contains %d\n", i, *(a + i));
    } // end for

    
    return 0;
    
} // end main


______________________________________


#include <stdio.h>
#define SIZE 5

int main()
{
    int no_of_numbers;
    int no_of_bytes;
    int *ptr;


    // Asking 
    printf("How many numbers do you wish to enter?\n");
    scanf("%d", &no_of_numbers);

    // Calculate the size of the block of memory required
    no_of_bytes = no_of_numbers * sizeof(int);

    // Allocate the memory block
    ptr = malloc(no_of_bytes);

    



    
    return 0;
    
} // end main


