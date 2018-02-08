/*
 Program Description:
 Passing 2-D arrays to and from functions
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 7th February 2018
 */

#include <stdio.h>

// Prototype
int sum_array(int[][2]);

int main()
{
    int my_array[3][2] = {
        2,4,
        6,8,
        10,12
    };
    int sum = 0;
    
    sum = sum_array(my_array);
    
    printf("sum of array is %d\n", sum);
    
    return 0;
} // end main()


/*
 Implementing sum_array()
 */
int sum_array(int pam_array[][2])
{
    int i,j;
    int sum_local = 0;
    
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            sum_local = sum_local + pam_array[i][j];
        } // end inner for
    } // end outer for
    return sum_local;
} // end sum_array


______________________________________________________

/*
    Storage classes
    * auto
      auto int num1;

    - auto variables are also
      called 'local' variables
    - all variables by default
      are auto variables
    - auto variables lose their
      data when the function in 
      which they are declared ends

    void fxn()
    {
        auto int num;
        num = 10;
    }

    * static
      statis int num2;

    - static variables are also
      'local' variables
    - static variables retain their
      data when a function ends
    - ALWAYS Initilize on the same
      line as it was declared
*/
#include <stdio.h>

// Prototypes
void fxn(void);

int main()
{
    for (int i = 0; i < 3; i++)
    {
        fxn();
    } // end for
    return 0;
} // end main

/*
 Implementing fxn()
*/
void fxn()
{
    auto int num1 = 0;
    static int num2 = 0;

    num1++;
    num2++;

    printf("num1 is %d, num2 is %d\n", num1, num2);
}




