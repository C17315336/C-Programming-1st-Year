/*
 Program Description:
 Switch Statement
 
 Author:
 Eoghan Byrne
 
 Date:
 9th October 2017
 */

#include <stdio.h>

int main()
{
    
    char userin;
    
    userin = '_';

    printf("Enter any none white space character\n");
    scanf("%1s", &userin);

    // State the switch statement
    switch(userin)
    {
        case'a':
        {
            printf("\nYou entered the vowel A\n");
            break;
        } // end case 'a'
        case'e':
        {
            printf("\nYou entered the vowel E\n");
            break;
        } // end case 'e'
        case'i':
        {
            printf("\nYou entered the vowel I\n");
            break;
        } // end case 'i'
        case'o':
        {
            printf("\nYou entered the vowel O\n");
            break;
        } // end case 'o'
        case'u':
        {
            printf("\nYou entered the vowel U\n");
            break;
        } // end case 'u'
        default:
        {
            printf("\nYou didn't enter a vowel\n");
        } // end default
    } // end switch

    
    return 0;
    
} // end main

