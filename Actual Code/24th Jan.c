/*
 Program Description:
 Functions
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 24th January 2018
 */

/*
    - function_name()
    - You can not call the main function

    paramter --> data that is passed to a function
                 when it is called
                 (Also called arguments)
*/

#include <stdio.h>

// Prototype
void stars(void); // <-- Return type

int num; // <-- Global variable
const float pi = 3.14; // <-- Constant variable. Similar to #define

int main()
{
    printf("Before function call \n\n");

    // Call function
    stars();
    printf("\n\nAfter function call\n");

    return 0;
} // end main()

/*
    Implement stars()
*/
void stars() // <-- Ensure to remove the semi-coln to execute the code
{
    int i; // <-- This is a local variable

    for (int i = 0; i < 5; ++i)
    {
        printf("+");
    } // end for
} // end stars()

____________________________________________________________________

#include <stdio.h>

// Prototype
void stars(int);

int main()
{
    int num = 0;

    printf("How many stars?\n");
    scanf("%d", &num);

    // Call function
    stars(num);

    return 0;
} // end main()


// Implement stars()
void stars()
{
    int i;
    for (int i = 0; i < 5; ++i)
    {
        printf("+");
    } // end for
} // end stars()

