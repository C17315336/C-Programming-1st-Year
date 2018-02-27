/**********************************************************************************************************
 Program Description:
 Lab Test 3 -
 
 ...
 
 
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
#define SIZE 5

// Prototypes
float convert_temp(float[]);
float in_Kelvin(float*);

int main()
{
    float temperatures[SIZE];
    int i = 0;
    float average, kelvin;
    average = kelvin = 0;
    
    
    // Asking the user for their input
    printf("Please enter in %d temperatures;\n", SIZE);
    
    // Entering data loop
    for (i = 0; i < SIZE; i++)
    {
        scanf("%f", &temperatures[i]);
    } // end for
    
    
    // Calling convert_temp()
    average = convert_temp(temperatures);
    
    // Displaying the average
    printf("\n\nThe average of your temperatures is: %.2f ºC\n", average);
    
    // Calling convert_temp()
    kelvin = in_Kelvin(&average);
    
    // Displaying the kelvin value
    printf("\nThe kelvin value of %.2f ºC is: %.2f K\n", average, kelvin);
    
    return 0;
} // end main()



// Implementing the convert_temp function
float convert_temp(float new_temps[])
{
    int i = 0;
    float temp, sum, avg;
    temp = sum = avg = 0;
    
    printf("\n\nYour temperatures below of Celsius on the left and Fahrenheit on the right\n");
    
    // Displaying the temperatures
    for (i = 0; i < SIZE; i++)
    {
        // Converting to F
        temp = ((new_temps[i] * 9)/5)+32;
        
        // Displaying the temperatures
        printf("%.2f\tºC\t\t%.2f\tºF\n", new_temps[i], temp);
        
        // Summing for the average
        sum = sum + new_temps[i];
    } // end for
    
    // Calculating the average
    avg = sum/SIZE;
    
    return avg;
} // end convert_temp()



// Implementing the in_Kelvin function
float in_Kelvin(float *ptr)
{
    float temp = 0;
    
    temp = *ptr + 273;
    
    return temp;
} // end in_Kelvin
