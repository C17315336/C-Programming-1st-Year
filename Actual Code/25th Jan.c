/*
 Program Description:
 Functions
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 25th January 2018
 */

/*
    - function_name()
    - You can not call the main function

    paramter --> data that is passed to a function
                 when it is called
                 (Also called arguments)

    scope - what is the scope of a variable
    		what can see the variable
*/

#include <stdio.h>

// Prototype
void stars(int);

int main()
{
    int num = 0;

    // Asking the user for the number of stars
    printf("How many stars?\n");
    scanf("%d", &num);

    // Call function
    stars(num);

    return 0;
} // end main()


// Implement stars()
void stars(int my_new) // <-- Parameter variable
{
    int i;
    for (int i = 0; i < my_new; ++i)
    {
        printf("+");
    } // end for
} // end stars()

_________________________________________________

#include <stdio.h>

// Prototype
void stars(int, char);

int main()
{
    int num = 0;
    char symbol = '';

    // Asking the user for the symbol to use
    printf("What symbol do you want?\n");
    scanf("%1s", &symbol);

    // Asking the user for the number of stars
    printf("How many %c's?\n");
    scanf("%d", &num);

    // Call function
    stars(num, symbol);

    return 0;
} // end main()


// Implement stars()
void stars(int my_new, char my_symbol) // <-- Parameter variable
{
    int i;
    for (int i = 0; i < my_new; ++i)
    {
        printf("%c", my_symbol);
    } // end for
} // end stars()

_________________________________________________

/*
	Return Types or Returning a value from a function
*/

#include <stdio.h>

// Prototype
float calc_ave(int, int, int);

int main()
{
    int num1, num2, num3;
    float avg = 0;
    num1 = num2 = num3 = 0;

    printf("Enter any three numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    // Call function calc_ave()
    avg = calc_ave(num1, num2, num3);

    printf("The average is %.1f\n", avg);

    return 0;
} // end main()


/*
	Calc Avg
*/
float calc_ave(int n1,int n2,int n3)
{
	// Variables
	int sum = 0;
	float average = 0;

	// Calculation
	sum = n1 + n2 + n3;
	average = sum/3.0;

	return average;
}


