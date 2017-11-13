/*
 Program Description:
 Array lab Q2 Temperature Conversion

 Program to enter 3 Fahrenheit temps
 into an array. Display each temp with 
 the corresponding Celsius equivalent
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 1st November 2017
 */

#include <stdio.h>
#define SIZE 3

int main()
{
    float Fahrenheit[SIZE];
    float Celsius = 0;
    int i;



    // Enter data into array
    for (i = 0; i < SIZE; ++i)
    {
        scanf("%f", &Fahrenheit[i]);
    }



    // Celsius = (Fahrenheit - 32.0) * (5.0/9.0)
    // Display content of array with Celsius equivalent
    for (i = 0; i < SIZE; ++i)
    {
        printf("%.1f\n", Fahrenheit[i]);
        Celsius = (Fahrenheit[i] - 32.0) * (5.0 / 9.0);
        printf("\n The Celsius equivalent is %.1f\n", Celsius);
    }

    
    return 0;
    
} // end main






