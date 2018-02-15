/*
 Program Description:
 Lab 11 - Question 1
 
 Author:
 Eoghan Byrne
 
 Date:
 15th February 2018
 */

#include <stdio.h>

// Prototype
void square(float*);
void circle(float*);

int main()
{
    float perm,rad;
    perm = rad = 0;
    
    
    // Asking for user input
    printf("Please enter the length of one side of your square\n");
    scanf("%f", &perm);
    
    printf("\n\n");
    
    printf("Please enter the radius of your circle\n");
    scanf("%f", &rad);
    
    
    // Calling functions
    square(&perm);
    circle(&rad);
    
    
    // Displaying the output
    printf("\n\n\n");
    printf("The area of your square is %.2f\n", perm);
    printf("The area of your circle is %.2f\n", rad);
    
    return 0;
} // end main()



/*
 Implement square()
 */
void square(float *ptr)
{
    float temp = 0;
    
    temp = *ptr;
    *ptr = (temp * temp);
} // end square



/*
 Implement circle()
 */
void circle(float *ptr)
{
    float temp = 0;
    float pi = 3.14;
    
    temp = *ptr;
    *ptr = (pi * (temp * temp));
} // end circle





