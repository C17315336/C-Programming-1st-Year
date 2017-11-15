/*
 Program Description:
 Pointers
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 14th November 2017
 */

#include <stdio.h>

int main()
{
    int num;
    char my_char;
    int *ptr1;
    char *ptr2;
    
    num = 5;
    my_char = 'M';
    
    // Make pointers point at the regular variables
    ptr1 = &num;
    ptr2 = &my_char;
    
    // Display contents of regular variables using their locations
    printf("num contains %d\n", num);
    printf("num contains %d\n", *ptr1);

    printf("num contains %c\n", my_char);
    printf("num contains %c\n", *ptr2);
    
    return 0;
    
} // end main




int main()
{
    int a,b,c;
    int *pa;
    int *pb;

    a = 1;
    b = 2;

    pa = &a;
    pb = &b;

    printf("A contains %d\n", *pa);
    printf("B contains %d\n", *pb);

    c = *pa/(*pb);
    
    
    return 0;
    
} // end main



/* 
Pointers and Arrays
In C, the name of an array is
equivalent (the same) as the address
of the 1st element in that array
*/

int main()
{
    int my_array[5];

    my_array ≈ &my_array[5]

    printf("my_array is %p\n", my_array);
    printf("&my_array is %p\n", &my_array[0]);
    
    
    return 0;
    
} // end main



int main()
{
    int my_array[5] = {2,4,6,8,10};

    /*
    my_array ≈ &my_array[0]
    my_array + 1 ≈ &my_array[1]
    my_array + 2 ≈ &my_array[2]
    my_array + 3 ≈ &my_array[3]
    my_array + 4 ≈ &my_array[4]
    */


    *(my_array) ≈ my_array[0];

    printf("%d\n", my_array[0]); // Accessing arrays by array names, sub script notation
    printf("%d\n", *(my_array)); // Accessing arrays by pionter names, pointer notation
    
    
    return 0;
    
} // end main


