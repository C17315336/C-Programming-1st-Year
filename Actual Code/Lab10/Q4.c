/*
 Program Description:
 Lab 10 - Question 4
 
 Author:
 Eoghan Byrne
 
 Date:
 1st February 2018
 */

#include <stdio.h>

// Prototype
int sum(int, int, int);
float average(int);

int main()
{
    int num1, num2, num3, sum1;
    float avg = 0;
    num1 = num2 = num3 = 0;

    printf("Enter any three numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    // Call function calc_ave()
    sum1 = sum(num1, num2, num3);
    avg = average(sum1);

    printf("The sum is %d\n", sum1);
    printf("The average is %.1f\n", avg);

    return 0;
} // end main()


/*
    Calc Sum
*/
int sum(int n1,int n2,int n3)
{
    // Variables
    int sum = 0;

    // Calculation
    sum = n1 + n2 + n3;

    return sum;
}

/*
    Calc Avg
*/
float average(int n1)
{
    // Variables
    float average = 0;

    // Calculation
    average = n1/3.0;

    return average;
}




