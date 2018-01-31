/*
 Program Description:
 Parameter passing
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 31st January 2018
 */

// Value = View
// Reference = Change

/*
    Pass by Value
    (When a copy of the parameter
    is passed to the function)
*/

#include <stdio.h>

// Prototype
void change_val(int);

int main()
{
    int num = 1;

    printf("num is %d", num);

    // Call change_val()
    change_val(num);

    printf("\n num is %d", num);

    return 0;
} // end main()



/*
	Implement change_val()
*/
void change_val(int val)
{
	val++;
	printf("\n val is %d", val);
} // end change_val


_____________________________________

/*
    Pass by Reference
    (When you pass the memory
    address of a parameter to
    a function.)
*/

#include <stdio.h>

// Prototype
void change_val(int*);

int main()
{
    int num = 1;

    printf("num is %d", num);

    // Call change_val()
    change_val(&num);

    printf("\n num is %d", num);

    return 0;
} // end main()



/*
	Implement change_val()
*/
void change_val(int *ptr)
{
	(*ptr)++;
	printf("\n val is %d", val);
} // end change_val

_____________________________________

/*
    Swapping two numbers
    using pass by reference
*/

#include <stdio.h>

// Prototype
void swap(float*, float*);

int main()
{
	float num1, num2;

	printf("Enter two numbers\n");
	scanf("%f", &num1);
	scanf("%f", &num2);

	// If the largest is in num1, swap
	if (num1 > num2)
	{
		swap(&num1, &num2);
	} // end if

	printf("\nThe number in order are %.1f and %.1f\n", num1, num2);

	return 0;
}


/*
	Implement swap()
*/

void swap(float *ptr1, float *ptr2)
{
	float tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2
	*ptr2 = tmp;
} // end swap()

