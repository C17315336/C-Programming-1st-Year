/*
 Program Description:
 Array of Strings
 + Sturctures
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 8th March 2018
 */

#include <stdio.h>
#include <string.h>
#define SIZE 12

int main()
{
	// Declaring the array of strings
	char *months[SIZE] = {"Jan", "Feb", "Mar",
						  "Apr", "May", "Jun",
						  "Jul", "Aug", "Sep",
						  "Oct", "Nov", "Dec"};

	// Displaying the array
	printf("The months are \n");
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%s\n", months[i]);
	} // end for

	return 0;
}

_________________________________________________


#include <stdio.h>
#include <string.h>

// Below is the structure template
//	   | This is the structure tage
struct student_rec
{
	// Below are the structure members
	int student_ID;
	char first_name[11];
	char last_name[21];
	int results[5];
};

int main()
{
	struct student_rec student1;

	student1.student_ID = 100;

	return 0;
}


_________________________________________________

/*
 If no functions delcare structure below if global
 If there IS functions declare stuctures ABOVE the functions
 */


#include <stdio.h>
#include <string.h>
#define SIZE 5

// Decalring the prototypes

// Structure templates
struct student_rec
{
    int student_ID;
    char first_name[11];
    char last_name[21];
    int results[5];
};

int main()
{
    struct student_rec student1;
    int i;
    
    printf("Enter student details\n");
    printf("\nEnter ID\n");
    scanf("%d", &student1.student_ID);
    printf("\nEnter First Name\n");
    scanf("%s",student1.first_name);
    printf("\nEnter Last Name\n");
    scanf("%s",student1.last_name);
    printf("\nEnter results\n");
    for (i = 0; i < SIZE; ++i)
    {
        scanf("%d", &student1.results[i]);
    }
    
    printf("\nStudent ID is %d\nFirst Name:\t%s\nLast Name:\t%s\n", student1.student_ID, student1.first_name, student1.last_name);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", student1.results[i]);
    } // end for
    
    return 0;
}


_________________________________________________


struct
{
    int student_ID;
    char first_name[11];
    char last_name[21];
    int results[5];
} student1;


