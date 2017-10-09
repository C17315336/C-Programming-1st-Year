/*
 Program Description:
 Q2
 
 Author:
 Eoghan Byrne
 
 Date:
 9th October 2017
 */

#include <stdio.h>

int main()
{
    // Creating variable
    int var1;
    int var2;

    // Initizing the variables
    var1 = 0;
    var2 = 0;

    // Asking for user input
    printf("Enter your first integer\n");
    scanf("%d", &var1);
    printf("\nEnter your second integer\n");
    scanf("%d", &var2);

    // Modulus (%) returns remainder
   if ( var1%var2 == 0 )
      printf("\nYour numbers are equally divisable\n");
   else
      printf("\nYour numbers are not equally divisable\n");
 
   return 0;
    
} // end main

