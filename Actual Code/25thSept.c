/*
	Program Description:
	Program showing mixed data types

	Author:
	Michael Collins
	Eoghan Byrne

	Date:
	25th September 2017
*/

#include <stdio.h>

int main()
{
	int var1 = 10;
	float var2 = 2.5;
	float var3;
	int var4;
	float var5;

	var3 = var1/var2; // Mixed expression
	var4 = var1/var2; // Mixed expression
	var5 = var1/4; 	  // Hard coding

	printf("var3 = %f, var4 = %d, var5 = %f\n",var3, var4, var5);

	return 0;
	
} // end main()


