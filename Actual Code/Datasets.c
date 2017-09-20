/*
	Program Description:
	Program to show incorrect datasets

	Author:
	Eoghan Byrne

	Date:
	18th September 2017
*/

#include <stdio.h>

int main()
{
	// Declaring the datasets
	int V1;
	float V2;
	char V3;

	// Declaring the variable
	V1 = 50;
	V2 = 50.01;
	V3 = 'Hello World';

	// Writing the function
	// Using %d for the character output will actually calculate the ASCII number for the character
	printf("V1 contains %d\nV2 contains %f\nV3 contains %d\n", V1, V2, V3);

	return 0;
	
}