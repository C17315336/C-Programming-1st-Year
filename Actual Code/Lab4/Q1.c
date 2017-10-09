/*
 Program Description:
 Q1
 
 Author:
 Eoghan Byrne
 
 Date:
 9th October 2017
 */

#include <stdio.h>

int main()
{
    
    char marriage_status;
    
    marriage_status = '_';

    printf("Please enter your marraiage status\nSingle - S\nMarried - M\nWidowed - W\nSeparated - E\nDivorced - D\n");
    scanf("%1s", &marriage_status);

    // State the switch statement
    switch(marriage_status)
    {
        case'S':
        {
            printf("\nSingle\n");
            break;
        } // end case 'S'
        case'M':
        {
            printf("\nMarried\n");
            break;
        } // end case 'M'
        case'W':
        {
            printf("\nWidowed\n");
            break;
        } // end case 'W'
        case'E':
        {
            printf("\nSeparated\n");
            break;
        } // end case 'E'
        case'D':
        {
            printf("\nDivorced\n");
            break;
        } // end case 'D'
        default:
        {
            printf("\nerror:invalid code\n");
        } // end default
    } // end switch

    
    return 0;
    
} // end main

