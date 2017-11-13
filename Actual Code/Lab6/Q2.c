/*
 Program Description:
 Q2
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 6th November 2017
 */

#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
    int matrix[ROW][COL];
    int i,j;
    int sum;
    float avg;
    int max;
    int min;
    
    i = 0;
    j = 0;
    sum = 0;
    avg = 0;
    max = 0;
    min = 0;
    
    
    
    // Entering data into array
    printf("Please enter 6 interagers:\n");
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; j < COL; ++j)
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        } // end inner for
    } // end outer for
    
    // Hard coding in first element of arrays to max min
    max = matrix[0][0];
    min = matrix[0][0];
    
    
    
    // Display arrays data
    printf("Data entered is \n");
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; j < COL; ++j)
        {
            printf("%d\n", matrix[i][j]);
        } // end inner for
    } // end outer for
    
    
    // Calculating and displaying the max and min
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            } // end if
        } // end inner for
    } // end outer for
    
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            } // end if
        } // end inner for
    } // end outer for
    printf("\n\nThe max is: %d\n", max);
    printf("The min is: %d\n", min);
    
    
    
    
    // Calculating and displaying the average
    avg = (float)sum/(ROW * COL);
    printf("\n\nThe average is %.2f\n", avg);
    
    
    
    
    return 0;
    
} // end main




