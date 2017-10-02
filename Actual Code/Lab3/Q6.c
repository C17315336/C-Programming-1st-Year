/*
 Program Description:
 Short questions Q6
 
 Author:
 Eoghan Byrne
 
 Date:
 1st October 2017
 */

#include <stdio.h>

int main()
{
    
    // Creating variables
    float Fahrenheit = 0;
    float Celsius = 0;
    

    // Accepting Input
    printf("Please enter your temperate in Fahrenheit:\n");
    scanf("%f", &Fahrenheit);
    
    Celsius = (Fahrenheit - 32.0) * (5.0/9.0);

    // Printing out answers
    printf("\nYour temperate in Celsius is:\n");
    printf("%.2f° \n", Celsius, degree);
    
    
    return 0;
    
}
