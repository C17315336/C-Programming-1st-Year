/*
 Program Description:
 2011 Exam Paper
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 12th April 2018
 */

/*
Make        Model           MPG     Engine
Honda       Civic           39      1.4
Toyata      Yaris           45      1.1
Mazda       MX-5            21      1.8
Suzuk       Grand Vitarq    23      2.0
*/

#include <stdio.h>
#include <string.h>

struct car
{
    char make[11];
    char model[11];
    int mpg;
    float engine;   
};

int main()
{
    int sum = 0;
    float avg = 0;

    //struct car car1, car2, car3, car4;
    struct car car1={"Honda", "Civic", 39, 1.4}, car2={"Toyata", "Yaris", 45, 1.1}, car3={"Mazda", "MX-5", 21, 1.8}, car4={"Suzuk", "Grand Vitarq", 23, 2.0};

    sum = car1.mpg + car2.mpg + car3.mpg + car4.mpg; 
    avg = (float)sum/4;

    printf("avg mpg is %.1f\n", avg);


    return 0;
} // end main
