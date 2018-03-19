/*
 Program Description:
 Sturctures passable as parameter
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 14th March 2018
 */

#include <stdio.h>
#include <string.h>

// Structure templates
struct student_rec
{
    int student_ID;
    char first_name[11];
    char last_name[21];
    int results[5];
};

// Pass by value
void display(struct student_rec);
// Pass by reference
void get(struct student_rec*);

int main()
{
    struct student_rec student1;
    struct student_rec *ptr;
    
    ptr = &student1;
    
    // get()
    get(ptr);
    // Display the student details
    display(student1);
    
    return 0;
} // end main



/*
 Implementing get()
 */
void get(struct student_rec *p)
{
    int i;
    
    printf("Enter student details\n");
    printf("Enter ID\n");
    scanf("%d", &(p->student_ID)); // You NEED to have a seperate set of brackets
    printf("\nEnter First Name\n");
    scanf("%s", &(p->first_name));
    printf("\nEnter Last Name\n");
    scanf("%s", &(p->last_name));
    printf("\nEnter results\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &(p->results[i]));
    } // end for
} // end get()



/*
 Implementing display()
 */
void display(struct student_rec stu)
{
    int i;
    
    printf("\n\n\nShowing student details\n");
    printf("ID:\t%d\n", stu.student_ID);
    printf("First Name:\t%s\n", stu.first_name);
    printf("Last Name:\t%s\n", stu.last_name);
    printf("Results:\t");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", stu.results[i]);
    } // end for
    printf("\n");
} // end display()



_________________________________________________________

#include <stdio.h>
#include <string.h>

// Structure templates
struct student_rec
{
    int student_ID;
    char first_name[11];
    char last_name[21];
    int results[5];
};

// Pass by value
void display(struct student_rec);
// Pass by reference
void get(struct student_rec*);

int main()
{
    struct student_rec students[5];
    int i;

    // Display student_ID
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d has ID %d", students[i].student_ID);
    }
    
    return 0;
} // end main


Tutorials
_________________________________________________________

struct date
{
    int day;
    int month;
    int year;
};

struct 
{
    char full_name[21];
    struct date birthday;
} details;



struct student_details
{
    char first_name[11];
    char last_name[21];
    int age;
    bool status;   
};

_________________________________________________________
//2014-2015 Exam Paper - Long Questions Q5
// http://student.dit.ie/exampapers/KT/2015_College_of_Science/DT211/DT211%201%20CMPU1025.pdf

#include <stdio.h>
#include <string.h>

struct flight_details
{
    char flight_num[6];
    char date[9];
    char last_name[21];
    char first_name[11];
    char seat[4];
};

void get(struct flight_details*, struct flight_details*);
void display(struct flight_details);

int main()
{
    struct flight_details pass1, pass2;

    get(&pass1, &pass2);

    return 0;
}

void get(struct flight_details *p1, struct flight_details *p2)
{
    int i;

    strcpy(p1 -> flight_num, "EI123")
    strcpy(p1 -> date, "15/03/2018")
    strcpy(p1 -> seat, "24A")
    strcpy(p2 -> flight_num, "EI123")
    strcpy(p2 -> date, "15/03/2018")
    strcpy(p2 -> seat, "24B")
    
    printf("Enter passenger details\n");
    printf("Enter Surname\n");
    scanf("%d", &(p->last_name));
    printf("\nEnter First Name\n");
    scanf("%s", &(p->first_name));
}



/*
 Implementing display()
 */
void display(struct flight_details fdetails)
{
    int i;
    
    printf("\n\n\nShowing passenger details:\n");
    printf("Flight:\t%d\n", stu.student_ID);
    printf("First Name:\t%s\n", stu.first_name);
    printf("Last Name:\t%s\n", stu.last_name);
    printf("Results:\t");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", stu.results[i]);
    } // end for
    printf("\n");
} // end display()
