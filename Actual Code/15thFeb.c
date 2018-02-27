/*
 Program Description:
 Strings
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 15th February 2018
 */

char ch;
printf("Enter any character\n");
scanf("%c", &ch);
scanf("%1s", &ch);
ch = getchar();


char greeting[6] = "Hello";
printf("%s\n", greeting);		// Print
printf("%2s\n", greeting);		// Print the first 2 characters
printf("%20s\n", greeting);		// Print 20 to the right
printf("%-20s\n", greeting);	// Print 20 to the left


_____________________________

printf("%c\n", ch);
putchar(ch);

puts()

_____________________________

#include <stdio.h>

int main()
{
	char firstname[11];

	printf("Enter first name:\n");
	scanf("%s", firstname); // <-- We don't need an & in a scanf
	// Fix for whitespace
	gets(firstname);



	// Both below are the same
	printf("%s\n", firstname);
	puts(firstname); // puts() automatically puts in \n BUT can't do formatting

	return 0;
}

_____________________________

#include <stdio.h>

int main()
{
	char greeting[6] = "Hello";

	for (int i = 0; i < 6; ++i)
	{
		printf("%c\n", greeting[i]);
		//printf("%c\n", *(greeting + i));
	}

	return 0;
}

_____________________________

/*
	Show the output of the following code:
*/

/*

		THIS IS FUCKING COOL SHIT!!!!!!

*/

#include <stdio.h>

int main()
{
	char word[] = {'C', 'H', 'S', '\0'};
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%c", *(word + i) + 1);
	}

	return 0;
}

_____________________________

/*
	String Q from 16/17

	Find frequency of 'is'
	In "There is an issue"
*/

#include <stdio.h>

int main()
{
	char word[] = {'C', 'H', 'S', '\0'};
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%c", *(word + i) + 1);
	}

	return 0;
}

_____________________________

#include <stdio.h>

int main()
{
	int i;
	char sentence[50];
	int counter = 0;

	gets(sentence);

	for (i = 0; i < 50; i++)
	{
		if (sentence[i] != '\0')
		{
			counter++;
		}
	}

	char new_sentence[50] = "My sentence is ";
	int j = 16;
	for (i = 0; i < 50; i++)
	{
		new_sentence[j] = sentence[i];
		j++;
	}

	return 0;
}


_____________________________

/*
	Error here is that an array value can't be put into an array
*/

#include <stdio.h>

int main()
{
	int ary[4] = {1,2,3,4};
	int p[4];
	p = ary; // <-- This is the error
	printf("%d\n", p[1]);

	return 0;
}







