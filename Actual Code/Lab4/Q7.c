/*
 Program Description:
 Q7
 
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

    printf("Enter any number from 1 - 7\n");
    scanf("%1s", &userin);

    // State the switch statement
    switch(userin)
    {
        case'1':
        {
            printf("\nThe day of the week is: MONDAY\n");
            break;
        } // end case '1'
        case'2':
        {
            printf("\nThe day of the week is: TUESDAY\n");
            break;
        } // end case '2'
        case'3':
        {
            printf("\nThe day of the week is: WEDNESDAY\n");
            break;
        } // end case '3'
        case'4':
        {
            printf("\nThe day of the week is: THURSDAY\n");
            break;
        } // end case '4'
        case'5':
        {
            printf("\nThe day of the week is: FRIDAY\n");
            break;
        } // end case '5'
        case'6':
        {
            printf("\nThe day of the week is: SATURDAY\n");
            break;
        } // end case '6'
        case'7':
        {
            printf("\nThe day of the week is: SUNDAY\n");
            break;
        } // end case '7'
        default:
        {
            printf("\nYou did not enter a valid number\n");
        } // end default
    } // end switch

    
    return 0;
    
} // end main

