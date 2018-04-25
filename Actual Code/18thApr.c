/*
	C Preprocesor

	Source Code
		|
	Preprocesor
		|
	Pre-procesed program
		|
	Compiler
		|
	Binary Executable File

	Include Files
	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>
	#include <string.h>

	#include "stdio.h"
	#include "\dir\files\headers\my_file.h"

	Macros
	(Symbolic names)
	#define SIZE 10
	#define PI 3.14
	#define NUM 10
	#define BEGIN {
	#define END }

	int main()
	BEGIN
		int num = 0;
	END

	#undef NUM
		|
	// No longer will be used
		|
	#define NUM 20

	Arrgument (Parameter)
	#define SQAURE(N) (N)+(N)
	int main()
	{
		int result = 0;
		result = SQUARE(2);
	}

*/