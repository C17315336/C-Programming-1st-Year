/*
 Program Description:
 Program to display the number of days in a month
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 25th October 2017
 */

#include <stdio.h>
#define NO_OF_MONTHS 12

int main()
{
    int days[NO_OF_MONTHS] = {31,28,31,30,
        31,30,31,31,
        30,31,30,31};
    int month;
    
    printf("Enter a month, \ne.g 1 = Jan,\n    2 = Feb\n");
    
    do
    {
        scanf("%d", &month);
    } while (month < 1 || month > 12);
    
    printf("\n The number of days in month %d is %d\n", month, days[month-1]);
    
    
    
    
    return 0;
    
} // end main






