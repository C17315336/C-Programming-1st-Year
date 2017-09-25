/*
	Program Description:
	Calculation of the area of a circle
 
	Author:
	Eoghan Byrne
 
	Date:
	25th September 2017
 */

#include <stdio.h>

int main()
{
    // Dimensions of the box
    float pi = 10;
    float radius = 4.8;
    float radiusoutcome;
    float area;

    
    
    // The calculation of the area
    radiusoutcome = radius * radius;
    area = radiusoutcome * pi;
    
    // Printing to standard output
    printf("The area of a circle with radius %.1fcm: %fcm3\n",radius, area);
    
    return 0;
    
}


