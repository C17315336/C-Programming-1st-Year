/*
 Program Description:
 Lab 10 - Question 1

 Author:
 Eoghan Byrne

 Date:
 1st February 2018
 */

#include <stdio.h>
#define STARS_AMOUNT 10

// Prototype
void stars(void); // Using void as I'm not returning any information

int main()
{
    // Providing some user feed back
    printf("Here are your %d stars\n", STARS_AMOUNT);

    // Calling the function
    stars();

    return 0;
} // end main()


/*
    Implement stars()
*/
void stars()
{
    for (int i = 0; i < STARS_AMOUNT; ++i)
    {
        printf("*");
    } // end for
} // end stars()





