/*
 Program Description:
 Tutorial
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 8th November 2017
 */

#include <stdio.h>
#define ROW 4
#define COL 3

int main()
{
    float myarray[ROW][COL] = {0};
    int i,j;
    int temp = 1;




    // Enter data into array one
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; j < COL; ++j)
        {
            myarray[i][j] = temp;
            temp++;
        } // end inner for
    } // end outer for




    // Enter data into array one
    printf("Data entered is \n");
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; j < COL; ++j)
        {
            printf("%.0f\n", myarray[i][j]);
        } // end inner for
    } // end outer for
    
    
    
    return 0;
    
} // end main





