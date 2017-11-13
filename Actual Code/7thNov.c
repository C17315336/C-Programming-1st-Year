/*
 Program Description:
 2 Dimensional Arrays
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 7th November 2017
 */

#include <stdio.h>

int main()
{
    int numbers[5] = {2,4,6,8,10};
    int values[4][3] = {2,4,6,8,10,1,3,5,7,9,11,13}
    int newvals[4][3] = {
    					2,4,6
    					8,10,1
    					3,5,7
    					9,11,13
    					}
    int i,j;


    // Enter data into array one
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; i < COL; ++j)
        {
            scanf("%d", &numbers[i][j]);
            sum = sum + numbers[i][j];
        } // end inner for
    } // end outer for




    // Enter data into array one
    printf("Data entered is \n");
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; i < COL; ++j)
        {
            printf("%d\n", matrix[i][j]);
        } // end inner for
    } // end outer for
    
    
    
    return 0;
    
} // end main





