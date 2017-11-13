/*
 Program Description:
 Pointers
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 13th November 2017
 */

#include <stdio.h>

int main()
{
    int var1;
    char var2;

    var1 = 1;
    var2 = 'A';

    printf("var1 contains %d and located at %p\n", var1, &var1); // %p will show the address of var1
    printf("var2 contains %c and located at %p\n", var2, &var2);

    /* Pointer variables
	A pointer variable is a variable that stores the address of another variable in the same program 

	data.type	*pointer.variable.name;
	e.g. int *ptr;

	*/    
    
    return 0;
    
} // end main


int main()
{
    int var1;
    char var2;
    int *ptr1;
    char *ptr2;

    var1 = 1;
    var2 = 'A';

    // Make ptr1 point to var1
    ptr1 = &var1;

    // Make ptr2 point to var2
    ptr2 = &var2;

    // Printing the stuff
    printf("ptr1 contains %p\n", ptr1);
    printf("ptr2 contains %p\n", ptr2);
   
    
    return 0;
    
} // end main

/* The referencing operator
(aka the indirection operator)

The de-referencing operator is used
to access the contents of a
variable whose address is stored
in a pointer
*/

int main()
{
    int var1;
    int *ptr1;


    var1 = 1;

    // Make ptr1 point to var1
    ptr1 = &var1;

    // Printing the stuff
    printf("ptr1 contains %p\n", ptr1);
    printf("*ptr1 contains %d\n", *ptr1);
   
    
    return 0;
    
} // end main






