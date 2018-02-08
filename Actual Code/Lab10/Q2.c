/*
 Program Description:
 Lab 10 - Question 2
 
 Author:
 Eoghan Byrne
 
 Date:
 1st February 2018
 */

#include <stdio.h>

// Prototype
void stars(int, char); // Using 2 data types

int main()
{
    int num = 0;
    char symbol = 'a';
    
    // Asking the user for the symbol to use
    printf("What symbol do you want?\n");
    scanf("%1s", &symbol);
    
    // Asking the user for the number of symbols
    printf("How many %c's?\n", symbol);
    scanf("%d", &num);
    
    // Call function
    stars(num, symbol);

    // Adding a blank line
    printf("\n");
    
    return 0;
} // end main()


// Implement stars()
void stars(int my_new, char my_symbol) // <-- Parameter variable
{
    for (int i = 0; i < my_new; ++i)
    {
        printf("%c", my_symbol);
    } // end for
} // end stars()





