/**********************************************************************************************************
 Program Description:
 Lab Test 4 -
 
 Driver's Licence Information
 
 Author:
 Eoghan Byrne
 C17315336
 
 Editor Used:                           Compiler Used:
 Sublime Text                           Xcode
 Version 3.0                            Version 9.1
 
 Created:
 12th April 2018
 **********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Structure templates
struct date
{
    int day;
    int month;
    int year;
};

struct licence_rec
{
    char first_name[11];
    char last_name[21];
    struct date dob;
    float height;
    char eye_colour[11];
    float weight;
};

// Prototypes
void get(struct licence_rec*, struct licence_rec*);
void display(struct licence_rec, struct licence_rec);

int main()
{
    struct licence_rec driver1, driver2;
    
    get(&driver1, &driver2);
    display(driver1, driver2);
    
    return 0;
}

/*
 Implementing get()
 */
void get(struct licence_rec *d1, struct licence_rec *d2)
{
    // Driver 1
    printf("Enter Driver 1 details\n");
    printf("Enter First Name:\t");
    scanf("%s", &(d1->first_name));
    printf("Enter Surname:\t");
    scanf("%s", &(d1->last_name));
    printf("Enter Date of Birth\n");
    printf("Day:\t");
    scanf("%d", &(d1->dob.day));
    printf("Month:\t");
    scanf("%d", &(d1->dob.month));
    printf("Year:\t");
    scanf("%d", &(d1->dob.year));
    printf("Enter Height (cm):\t");
    scanf("%f", &(d1->height));
    printf("Enter Eye Colour:\t");
    scanf("%s", &(d1->eye_colour));
    printf("Enter Weight (lb):\t");
    scanf("%f", &(d1->weight));
    printf("_____________\n\n");
    
    // Driver 2
    printf("Enter Driver 2 details\n");
    printf("Enter First Name:\t");
    scanf("%s", &(d2->first_name));
    printf("Enter Surname:\t");
    scanf("%s", &(d2->last_name));
    printf("Enter Date of Birth\n");
    printf("Day:\t");
    scanf("%d", &(d2->dob.day));
    printf("Month:\t");
    scanf("%d", &(d2->dob.month));
    printf("Year:\t");
    scanf("%d", &(d2->dob.year));
    printf("Enter Height (cm):\t");
    scanf("%f", &(d2->height));
    printf("Enter Eye Colour:\t");
    scanf("%s", &(d2->eye_colour));
    printf("Enter Weight (lb):\t");
    scanf("%f", &(d2->weight));
    printf("_____________\n\n");
} // end get()

/*
 Implementing display()
 */
void display(struct licence_rec d1, struct licence_rec d2)
{
    printf("\n\n\n");
    // Driver 1
    printf("Showing Driver 1 details\n");
    printf("First Name:\t%s\n", d1.first_name);
    printf("Surname:\t%s\n", d1.last_name);
    printf("DOB:\t\t%d/%d/%d\n", d1.dob.day, d1.dob.month, d1.dob.year);
    printf("Height:\t\t%.2f(cm)\n", d1.height);
    printf("Eye Colour:\t%s\n", d1.eye_colour);
    printf("Weight:\t\t%.2f(lb)\n", d1.weight);
    printf("_____________\n\n");
    
    // Driver 2
    printf("Showing Driver 2 details\n");
    printf("First Name:\t%s\n", d2.first_name);
    printf("Surname:\t%s\n", d2.last_name);
    printf("DOB:\t\t%d/%d/%d\n", d2.dob.day, d2.dob.month, d2.dob.year);
    printf("Height:\t\t%.2f(cm)\n", d2.height);
    printf("Eye Colour:\t%s\n", d2.eye_colour);
    printf("Weight:\t\t%.2f(lb)\n", d2.weight);
    printf("_____________\n");
} // end display()

