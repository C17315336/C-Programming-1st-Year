/*
 Program Description:
 Lab 12 - Question 1 - Part 2
 
 Author:
 Eoghan Byrne
 
 Date:
 8th March 2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIST 30
#define INPUT 50

int main()
{
    const char user[INPUT];
    const char lists[] = "AustraliaBelgiumChinaDenmarkEnglandFranceGreeceIrelandScotlandWales";
    const char lists[] = "CanberraBrusselsBeijingCopenhagenLondonParisAthensDublinEdinburghCardiff";
    char *found;
    int len = 0;
    
    printf("Please enter a country:\n");
    gets(user);
    
    found = strstr(lists, user);
    len = strlen(user);
    
    if (found != NULL)
    {
        printf("\n\nThe capitable of %s is %s\n", user);
    }
    else
    {
        printf("\n\nThere is no capitable found!\n");
    }
    
    return 0;
} // end main()





