/*
 Program Description:
 Finding the youngest, oldest and average of a set of ages
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 23rd October 2017
 */

#include <stdio.h>

int main()
{
    int ages[10];
    int i;
    int youngest, oldest;
    int total;
    float average;
    
    youngest = 0;
    oldest = 0;
    total = 0;
    average = 0;
    
    printf("Enter 10 ages\n");
    // Enter ages into the array
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &ages[i]);
        total = total + ages[i];
    } // end for
    
    /*
     Assume both the youngest and
     oldest age is the first element
     of the array
     */
    
    youngest =  ages[0];
    oldest =  ages[0];
    
    // Find the youngest and oldest
    for (i = 0; i < 10; ++i)
    {
        if (ages[i] < youngest)
        {
            youngest = ages[i];
        } // end if
        
        if (ages[i] > oldest)
        {
            oldest = ages[i];
        } // end if
    } // end for
    
    average = (float)total/10;
    printf("\nThe youngest age is %d\n", youngest);
    printf("\nThe oldest age is %d\n", oldest);
    printf("\nThe average age is %.1f\n", average);
    
    return 0;
    
} // end main




----------------------------------------
/*
Symbolic Names

#define SIZE 20

*/

#include <stdio.h>
#define SIZE 20

int main()
{
    int ages[SIZE];
    int i;
    int youngest, oldest;
    int total;
    float average;
    
    youngest = 0;
    oldest = 0;
    total = 0;
    average = 0;
    
    printf("Enter %d ages\n", SIZE);
    // Enter ages into the array
    for (i = 0; i < SIZE; ++i)
    {
        scanf("%d", &ages[i]);
        total = total + ages[i];
    } // end for
    
    /*
     Assume both the youngest and
     oldest age is the first element
     of the array
     */
    
    youngest =  ages[0];
    oldest =  ages[0];
    
    // Find the youngest and oldest
    for (i = 0; i < SIZE; ++i)
    {
        if (ages[i] < youngest)
        {
            youngest = ages[i];
        } // end if
        
        if (ages[i] > oldest)
        {
            oldest = ages[i];
        } // end if
    } // end for
    
    average = (float)total/SIZE;
    printf("\nThe youngest age is %d\n", youngest);
    printf("\nThe oldest age is %d\n", oldest);
    printf("\nThe average age is %.1f\n", average);
    
    return 0;
    
} // end main



