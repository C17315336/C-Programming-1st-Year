/*
	Pass by reference
	Pass by value is passing a copy of the variable
	Pass by refer is passing the address of the variable
*/

#include <stdio.h>
#include <stdlib.h>

// Prototypes
int getSum(int, int); // <- Pass by value
void change(int *, int *); // <- Pass by reference

int main()
{
	int num1 = 5;
	int num2 = 7;
	int sum = 0;

	// Calling getSum()
	sum = getSum(num1, num2);
	printf("The sum of the variables is %d\n", sum);

	// Calling change()
	change(&num1, &num2);
	printf("num1 contains %d and num2 contains %d\n", num1, num2);



	return 0;
} // end main


// Emplement getSum
int getSum(int n1, int n2)
{
	int my_sum = 0;

	my_sum = n1 + n2;

	return my_sum;
}


// Emplement change
void change(int *ptr1, int *ptr2)
{
	printf("Enter two new numbers:\n");
	scanf("%d", &*(ptr1));
	scanf("%d", &*(ptr2));
}