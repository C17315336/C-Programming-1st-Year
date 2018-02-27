/*
 Introduction to Alogrithms
 Lab 6: Sorting Algorithms
 
 Eoghan Byrne - C17315336
 */
#include <stdio.h>

// Decalring Prototypes
void merge(int [], int, int [], int, int []);


int main()
{
    // Declaring Variables
    int a[100], b[100], i, m, n, sorted[200];
    /*
     m = array1 size
     n = array2 size
     i = counter
     a = array1
     b = array 2
     sorted = array sorted contents
     */
    
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
    
    
    // Calling the sorting and merge
    merge(a, m, b, n, sorted);
    
    
    // Displaying the output
    printf("\n\n\nSorted array of integers:\n");
    for (i = 0; i < m + n; i++)
    {
        printf("%d\n", sorted[i]);
    } // end for
    
    return 0;
}


void merge(int a[], int m, int b[], int n, int sorted[])
{
    int i, j, k;
    j = k = 0;
    
    for (i = 0; i < m + n;)
    {
        if (j < m && k < n)
        {
            if (a[j] < b[k])
            {
                sorted[i] = a[j];
                j++;
            } // end if
            else
            {
                sorted[i] = b[k];
                k++;
            } // end else
            i++;
        } // end if
        else if (j == m)
        {
            for (; i < m + n;)
            {
                sorted[i] = b[k];
                k++;
                i++;
            } // end for
        } // end else if
        else
        {
            for (; i < m + n;)
            {
                sorted[i] = a[j];
                j++;
                i++;
            } // end for
        } // end else
    } //end for
} // end merge

