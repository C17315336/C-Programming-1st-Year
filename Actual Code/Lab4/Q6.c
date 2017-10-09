/*
 Program Description:
 Q6
 
 Author:
 Eoghan Byrne
 
 Date:
 9th October 2017
 */

#include <stdio.h>

int main()
{
    
    char userin;
    
    userin = '0';

    printf("Enter any numeral from the keyboard\n");
    scanf("%1s", &userin);

    // State the switch statement
    switch(userin)
    {
        case'0':
        {
            printf("\nYou have entered the number: ZERO\n");
            break;
        } // end case '0'
        case'1':
        {
            printf("\nYou have entered the number: ONE\n");
            break;
        } // end case '1'
        case'2':
        {
            printf("\nYou have entered the number: TWO\n");
            break;
        } // end case '2'
        case'3':
        {
            printf("\nYou have entered the number: THREE\n");
            break;
        } // end case '3'
        case'4':
        {
            printf("\nYou have entered the number: FOUR\n");
            break;
        } // end case '4'
        case'5':
        {
            printf("\nYou have entered the number: FIVE\n");
            break;
        } // end case '5'
        case'6':
        {
            printf("\nYou have entered the number: SIX\n");
            break;
        } // end case '6'
        case'7':
        {
            printf("\nYou have entered the number: SEVEN\n");
            break;
        } // end case '7'
        case'8':
        {
            printf("\nYou have entered the number: EIGHT\n");
            break;
        } // end case '8'
        case'9':
        {
            printf("\nYou have entered the number: NINE\n");
            break;
        } // end case '9'
        default:
        {
            printf("\nYou did not enter a number\n");
        } // end default
    } // end switch

    
    return 0;
    
} // end main

