/*
 Program Description:
 Use of operations
 
 Author:
 Eoghan Byrne
 
 Date:
 25th September 2017
 */

#include <stdio.h>

int main()
{
    // Variables for the answers
    int ans1;
    int ans2;
    float ans3;
    float ans4;
    float ans5;
    char per = 37;
    
    // The calculation of all the operations
    ans1 = 15 + 10;
    ans2 = 15 - 10;
    ans3 = 15 * 10;
    ans4 = 15 / 10;
    ans5 = 15 % 3;
    
    // Printing to standard output
    printf("The answer to 15 + 10 is: %d\n", ans1);
    printf("The answer to 15 - 10 is: %d\n", ans2);
    printf("The answer to 15 * 10 is: %.2f\n", ans3);
    printf("The answer to 15 / 10 is: %.2f\n", ans4);
    printf("The answer to 15 %c 3 is: %f\n",per, ans5);
    
    return 0;
    
}


