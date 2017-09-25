/*
	Program Description:
	Calculations of a cube
 
	Author:
	Eoghan Byrne
 
	Date:
	25th September 2017
 */

#include <stdio.h>

int main()
{
    // Dimensions of the box
    float height = 2.8;
    float length = 2.8;
    float width = 2.8;
    float volume;
    
    
    // The calculation of the volume
    volume = height * length * width;
    
    
    // Printing to standard output
    printf("The volume of the box is: %.3fm3\n",volume);
    
    return 0;
    
}


