/*
 Program Description:
 Q3
 
 Author:
 Eoghan Byrne
 
 Date:
 9th October 2017
 */

#include <stdio.h>

int main()
{
    // Creating variable
    float var1;
    float var2;
    float var3;
    float side1;
    
    // Initizing the variables
    var1 = 0;
    var2 = 0;
    var3 = 0;
    side1 = 0;
    
    // Asking for user input
    printf("Enter your first side\n");
    scanf("%f", &var1);
    printf("\nEnter your second side\n");
    scanf("%f", &var2);
    printf("\nEnter your third side\n");
    scanf("%f", &var3);
    
    side1 = var1 + var2;
    
    // Modulus (%) returns remainder
    if (side1>var3)
        printf("\nYou have a triangle\n");
    else
        printf("\nYou don't have a triangle\n");
    
    return 0;
    
} // end main

