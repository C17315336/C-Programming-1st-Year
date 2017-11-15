/*
 Program Description:
 Q1
 
 Author:
 Eoghan Byrne
 
 Date:
 13th November 2017
 */

#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{
    // Declaring an intilizing the arrays and variables
    int myarray1[ROW][COL] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int myarray2[ROW][COL] = {12,11,10,9,8,7,6,5,4,3,2,1};
    int myarray3[ROW][COL] = {0};
    int i = 0;
    int j = 0;
    
    // Calculating the array values
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; j < COL; ++j)
        {
            myarray3[i][j] = myarray1[i][j] * myarray2[i][j];
        }
    }
    
    // Display arrays data
    printf("Answers as below: \n");
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; j < COL; ++j)
        {
            printf("%d * %d = %d\n", myarray1[i][j], myarray2[i][j], myarray3[i][j]);
        } // end inner for
    } // end outer for
    
    return 0;
    
} // end main





