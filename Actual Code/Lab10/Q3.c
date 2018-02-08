/*
 Program Description:
 Lab 10 - Question 3
 
 Author:
 Eoghan Byrne
 
 Date:
 1st February 2018
 */

#include <stdio.h>

// Prototype
void sort(int*, int*,  int*);

int main()
{
    int num1, num2, num3;
    num1 = num2 = num3 = 0;
    
    printf("Enter your three whole numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    sort(&num1, &num2, &num3);
    
    printf("\nThe numbers in order are %d, %d, %d\n", num1, num2, num3);
    
    return 0;
}


/*
 Implement swap()
 */

void sort(int *ptr1, int *ptr2, int *ptr3)
{
    int tmp;
    
    if(*ptr1 > *ptr3)
    {
        tmp = *ptr1;
        *ptr1 = *ptr3;
        *ptr3 = tmp;
    } // end if
    
    if(*ptr1 > *ptr2)
    {
        tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
    } // end if
    
    if(*ptr2 > *ptr3)
    {
        tmp = *ptr2;
        *ptr2 = *ptr3;
        *ptr3 = tmp;
    } // end if
} // end swap1()




