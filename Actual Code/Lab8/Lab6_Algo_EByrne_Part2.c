/*
 Introduction to Alogrithms
 Lab 6: Sorting Algorithms
 ALTERNATIVE VERSION
 
 Eoghan Byrne - C17315336
 */
#include <stdio.h>

void quickSort( int[], int, int);
int partition( int[], int, int);

int main()
{
    // Declaring Variables
    int a[100], b[100], i, m, n, sorted[200];
    
    // Asking for array1 size
    printf("Enter the size of the first array:\n");
    scanf("%d", &m);
    
    // Accepting input
    printf("\nInput %d integer numbers\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    } // end for
    
    
    // Asking for array2 size
    printf("\n\nEnter the size of the second array\n");
    scanf("%d", &n);
    
    // Accepting input
    printf("\nInput %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    } // end for
    

    // Merging Arrays
    memcpy(sorted, a, m * sizeof(int));
    memcpy(sorted + m, b, n * sizeof(int));

    // Quick sorting
    quickSort( sorted, 0, 8);
    
    
    // Displaying the output
    printf("\n\n\nSorted array of integers:\n");
    for (i = 0; i < m + n; i++)
    {
        printf("%d\n", sorted[i]);
    } // end for
    
    return 0;
}

void quickSort( int a[], int l, int r)
{
   int j;

   if( l < r ) 
   {
        // divide and conquer
        j = partition( a, l, r);
        quickSort( a, l, j-1);
        quickSort( a, j+1, r);
   }
    
}



int partition( int a[], int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;
        
   while( 1)
   {
    do ++i; while( a[i] <= pivot && i <= r );
    do --j; while( a[j] > pivot );
    if( i >= j ) break;
    t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}