/*
	Program Description:
	Calculations of a box
 
	Author:
	Eoghan Byrne
 
	Date:
	25th September 2017
 */

#include <stdio.h>

int main()
{
    // Dimensions of the box
    float height = 10;
    float length = 11.5;
    float width = 2.5;
    float volume;
    float surface;
    float top;
    float side;
    float face;
    
    
    // The calculation of the volume
    volume = height * length * width;
    
    // The calculation of surface area
    top = (length * width) * 2;
    side = (height * length) * 2;
    face = (height * width) * 2;
    surface = top + side + face;
    
    // Printing to standard output
    printf("The volume of the box is: %.2fcm3\n",volume);
    printf("The surface area of the box is: %.2fcm3\n",surface);
    
    return 0;
    
}


