/*
 Program Description:
 Short questions Q2
 
 Author:
 Eoghan Byrne
 
 Date:
 1st October 2017
 */

#include <stdio.h>

int main()
{
    
    // Creating variables
    int first, second, third, fourth;
    float principal, rate, time, f;
    char keyval1, keyval2;
    double d;
    

    // Accepting input
    printf("Please enter five integers (Note to press enter after each one)\n");
    printf("First;\n");
    scanf("%d", &first);
    printf("\nSecond;\n");
    scanf("%d", &second);
    printf("\nThird;\n");
    scanf("%d", &third);
    printf("\nFourth;\n");
    scanf("%d", &fourth);
    printf("\ni;\n");
    scanf("%d", &i);

    printf("\n\nPlease enter four decimal numbers (Note to press enter after each one)\n");
    printf("Principal;\n");
    scanf("%f", &principal);
    printf("\nRate;\n");
    scanf("%f", &rate);
    printf("\nTime;\n");
    scanf("%f", &time);
    printf("\nf;\n");
    scanf("%f", &f);

    printf("\n\nPlease enter two characters (Note to press enter after each one)\n");
    printf("Keyval1;\n");
    scanf("%1s", &keyval2);
    printf("\nKeyval2;\n");
    scanf("%1s", &keyval2);

    printf("\n\nPlease enter a large decimal number (Note to press enter after)\n");
    printf("Double;\n");
    scanf("%f", &d);
    
    
    // Printing out answers
    printf("\nYou have entered:\n");
    printf("Ints: %d,%d,%d,%d,%d\n", first, second, third, fourth, i);
    printf("Floats: %.5f,%.5f,%.5f,%.5f\n", principal, rate, time, f);
    printf("Chars: %c,%c\n", keyval1, keyval2);
    printf("Double: %f\n", d);

    
    return 0;
    
}