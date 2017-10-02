/*
 Program Description:
 Short questions Q3
 
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
    
    
    // Printing out answers
    printf("\nShowing everything in reverse order:\n");
    printf("Ints: %d,%d,%d,%d\n", fourth, third, second, first);
    
    
    return 0;
    
}
