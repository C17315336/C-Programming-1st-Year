/*
    Program Description:
    Looking at scanf
 
    Author:
    Michael Collins
    Eoghan Byrne
 
    Date:
    27th September 2017
 */

#include <stdio.h>

int main()
{
    
    int num1;
    float num2;

    num1 = num2 = 0;
    
    printf("Enter two numbers\n");
    scanf("%d", &num1);
    scanf("%f", &num2);
    system(clear);
    printf("\nYou entered %d\n", num1);
    printf("You entered %f\n", num2);

    /* You can use %% to actually show a %% */
    
    return 0;
    
}


int main()
{
    
    char ch;

    printf("Enter any character\n");
    scanf("%c", &ch);
    printf("\nYou entered %c\n", ch);
    
    return 0;
    
}

int main()
{
    
    char ch;

    printf("Enter any character\n");
    scanf("%1s", &ch); // To validate the input 
    printf("\nYou entered %c\n", ch);
    
    return 0;
    
}
