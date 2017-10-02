/*
 Program Description:
 Short questions Q5
 
 Author:
 Eoghan Byrne
 
 Date:
 1st October 2017
 */

#include <stdio.h>

int main()
{
    
    // Creating variables
    int age = 0;
    int beat = 75;
    float total = 0;
    float year = 0;

    year = ((beat * 60) * 24) * 365.25;
    

    printf("Please enter your age\n");
    scanf("%d", &age);
    
    total = (year * age);

    // Printing out answers
    printf("\n\nYour heart has beaten a total of:\n");
    printf("%.f beats\n", total);
    
    
    return 0;
    
}
