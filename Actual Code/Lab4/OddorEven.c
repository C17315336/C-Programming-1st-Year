/*
 Program Description:
 Even or Odd
 
 Author:
 Eoghan Byrne
 
 Date:
 9th October 2017
 */

#include <stdio.h>

int main()
{
    // Creating variable
    int userin;

    // Initizing the variables
    userin = 0;

    // Asking for user input
    printf("Enter any integer between 1 and 100\n");
    scanf("%d", &userin);

    // Modulus (%) returns remainder
   if ( userin%2 == 0 )
      printf("\nNumber %d is an even numbern\n", userin);
   else
      printf("\nNumber %d is an odd numbern\n", userin);
 
   return 0;
    
} // end main

