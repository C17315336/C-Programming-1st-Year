/*
	Program Description:
	Lecture 20th Septemer

	Author:
	Michael Collins
	Eoghan Byrne

	Date:
	20th September 2017
*/

#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	num2 = 0;
	num3 = 0;

	int num1, num2, num3; // Declaring the nums

	num1 = num2 = num3 = 0; // Intialize nums

	int num1 = 0; // Declare and intialize num1

	int num1, num2 = 0; // There is a bug here, 0 will only be entered into num2
	num1 = num2; // This is the fix for the error


	____________________________________________________________

	/* Increment Operator */

	int var;
	var = 1;

	var = var + 1;
	// OR
	var++;

	____________________________________________________________

	int num1, num2, num3;
	num1 = 0;
	num2 = 1;
	num3 = 0;

	num3 = num1++; // Assigns num1 to num3 first then adds one
				   // Post increment

	num3 = ++num1; // Pre increment
				   // Adds one to num1 then assigns to num3

	/* Same goes for both increment and decrement */

	____________________________________________________________

	int num;
	num = 1;

	num++; // Adds one

	num = num + 2; // Adds two
	// OR
	num += 2;


	num = num * 2; // Multiplies by 2
	// OR
	num *= 2;

	num3 = (num1++);


	____________________________________________________________

	

	

	return 0;
	
}


