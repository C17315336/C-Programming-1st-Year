/**********************************************************************************************************
 Program Description:
 Lab Test 3 -
 
 Currency Converter
 1. Ask the user to select a currency either € or $
 2. Write 2 Functions for converting
 3. Calculate the average of the three converted numbers
 4. Repeat and end gracefully
 
 
 Author:
 Eoghan Byrne
 C17315336
 
 Editor Used:                           Compiler Used:
 Sublime Text                           Xcode
 Version 3.0                            Version 9.1
 
 Created:
 22nd February 2018
 **********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
#define DOLLAR 1.19
#define EURO 0.84
#define ERROR_CHECK 3

// Prototypes
float change_to_Euro(float[]);
float change_to_Dollar(float[]);

int main()
{
    float user_input[SIZE];
    char error_check[ERROR_CHECK] = {'0'};
    int i = 0;
    char option = '0';
    float average = 0;
    
    // Do While to Repeat Program
    do{
        // Resetting the required variables
        option = '0';
        error_check[0] = '0';
        
        // Asking the user for their option
        printf("Please select from the list below:\n\t1. Enter Euro Values\n\t2. Enter Dollar Values\n\t3. Exit Program\n");
        
        // Using an IF ELSE statement for error checking
        // The IF condition is exspecting the user to enter a single string value followed by a non numeric character
        if((scanf("%1s%c", &option, &error_check[0])!=2 || error_check[0]!='\n') && clear_input_value())
        {
            printf("You entered an Invaild Character\n\n\n\n");
        }
        else
        {
            // Menu Options
            switch(option)
            {
                case'1':
                {
                    printf("\n\nYou selected EURO\nPlease enter in %d values below;\n", SIZE);
                    // Entering data loop
                    for (i = 0; i < SIZE; i++)
                    {
                        scanf("%f", &user_input[i]);
                    } // end for
                    
                    // Calling change_to_Dollar()
                    average = change_to_Dollar(user_input);
                    
                    // Displaying the average
                    printf("\n\nThe average of your Dollar amount is: $%.2f\n\n\n", average);
                    
                    // Reseting user input
                    option = '0';
                    break;
                } // end case '1'
                case'2':
                {
                    printf("\n\nYou selected DOLLAR\nPlease enter in %d values below;\n", SIZE);
                    // Entering data loop
                    for (i = 0; i < SIZE; i++)
                    {
                        scanf("%f", &user_input[i]);
                    } // end for
                    
                    // Calling change_to_Euro()
                    average = change_to_Euro(user_input);
                    
                    // Displaying the average
                    printf("\n\nThe average of your Euro amount is: €%.2f\n\n\n", average);
                    break;
                } // end case '2'
                case'3':
                {
                    printf("\nThank you for using the program\n");
                    break;
                } // end case '3'
                default:
                {
                    printf("\nInvalid option\n\n\n");
                } // end default
            } // end switch
        } // end else
    } // end do
    while(option != '3');
    
    return 0;
} // end main()



// Implementing the change_to_Dollar function
float change_to_Dollar(float alt_values[])
{
    int i = 0;
    float temp, sum, avg;
    temp = sum = avg = 0;
    
    printf("\n\nYour values below of Euro on the left and Dollar on the right\n");
    
    // Displaying the values
    for (i = 0; i < SIZE; i++)
    {
        // Converting to Dollar
        temp = alt_values[i] * DOLLAR;
        
        // Displaying the values
        printf("€ %.2f\t\t$ %.2f\n", alt_values[i], temp);
        
        // Summing for the average
        sum = sum + temp;
    } // end for
    
    // Calculating the average
    avg = sum/SIZE;
    
    return avg;
} // end change_to_Dollar()



// Implementing the change_to_Euro function
float change_to_Euro(float alt_values[])
{
    int i = 0;
    float temp, sum, avg;
    temp = sum = avg = 0;
    
    printf("\n\nYour values below of Dollar on the left and Euro on the right\n");
    
    // Displaying the values
    for (i = 0; i < SIZE; i++)
    {
        // Converting to Euro
        temp = alt_values[i] * EURO;
        
        // Displaying the values
        printf("$ %.2f\t\t€ %.2f\n", alt_values[i], temp);
        
        // Summing for the average
        sum = sum + temp;
    } // end for
    
    // Calculating the average
    avg = sum/SIZE;
    
    return avg;
} // end change_to_Euro()



// Using the int clear_input_value() to reset the users input in the case of an error
int clear_input_value()
{
    while (getchar()!='\n');
    return 1;
}

