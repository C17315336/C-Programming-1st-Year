/*
	Program Description:
	Lecture 19th Septemer

	Author:
	Michael Collins
	Eoghan Byrne

	Date:
	19th September 2017
*/

#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;

	num1 = 1;
	num2 = 3;
	num3 = 0;
	
	// Addition
	num3 = num1 + num2;
	printf("%d plus %d is %d", num1, num2, num3);

	// Subtraction
	num3 = num1 - num2;
	printf("%d minus %d is %d", num1, num2, num3);

	// Multiplication
	num3 = num1 * num2;
	printf("%d by %d is %d", num1, num2, num3);

	// Division
	num3 = num2 / num1;
	printf("%d divided %d is %d", num2, num1, num3);

	// Modulus code
	num3 = num2 % num1;
	printf("%d by %d is %d", num1, num2, num3);

	return 0;
	
}


