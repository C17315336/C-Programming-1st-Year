/*
 Program Description:
 Use of modulus
 
 Author:
 Eoghan Byrne
 
 Date:
 25th September 2017
 */

#include <stdio.h>

int main()
{
    // Variables for the answers
    float ans1;
    float ans2;
    float ans3;
    float ans4;
    float ans5;
    float ans6;
    char per = 37;
    
    // The calculation of all the modlus
    ans1 = 2 % 2;
    ans2 = 3 % 2;
    ans3 = 5 % 2;
    ans4 = 7 % 3;
    ans5 = 100 % 33;
    ans6 = 100 % 6;
    
    // Printing to standard output
    printf("The modlus of 2 %c 2 is: %f\n",per, ans1);
    printf("The modlus of 3 %c 2 is: %f\n",per, ans2);
    printf("The modlus of 5 %c 2 is: %f\n",per, ans3);
    printf("The modlus of 7 %c 3 is: %f\n",per, ans4);
    printf("The modlus of 100 %c 33 is: %f\n",per, ans5);
    printf("The modlus of 100 %c 7 is: %f\n",per, ans6);
    
    return 0;
    
}


