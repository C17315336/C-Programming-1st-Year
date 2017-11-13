/*
 Program Description:
 2 Dimensional Arrays
 
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
    // One dimenional array
    // int numbers[5];

    // Multi dimenional arrays
    //  2D Arrays
    // int matrix[no.of.rows][no.of.columns]
    // int matrix[3][2]



    int matrix[ROW][COL];
    int i,j;


    // Enter data into array one
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; i < COL; ++j)
        {
            scanf("%d", &matrix[i][j]);
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




#include <stdio.h>
#define ROW 4
#define COL 3

int main()
{
    // One dimenional array
    // int numbers[5];

    // Multi dimenional arrays
    //  2D Arrays
    // int matrix[no.of.rows][no.of.columns]
    // int matrix[3][2]



    int numbers[ROW][COL];
    int i,j;
    int sum = 0;
    float avg;


    // Enter data into array one
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; i < COL; ++j)
        {
            scanf("%d", &numbers[i][j]);
            sum = sum + numbers[i][j];
        } // end inner for
    } // end outer for

    avg = (float)sum/(ROW * COL)

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





