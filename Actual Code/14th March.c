/*
 Program Description:
 Sturctures
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 14th March 2018
 */

#include <stdio.h>
#include <string.h>

struct student_rec
{
    int student_ID;
    char first_name[11];
    char last_name[21];
    int results[5];
};

int main()
{
    int var = 1l
    int *p
    struct student_rec student1 = {100, "Jim", "Jones", {70, 45, 63, 89, 44}};


	return 0;
}



________________________________________________

struct student_rec
{
    int student_ID;
    char first_name[11];
    char last_name[21];
    int results[5];
};

int main(int argc, char const *argv[])
struct student_rec *p;
*p = &student1;
    return 0;
}

student1.student.10 = 100;
(*p).student_ID = 100; // Won't
p -> student.ID = 100;


________________________________________________

struct student_rec
{
    int student_ID;
    char first_name[11];
    char last_name[21];
    int results[5];
};

int main()
{
    struct student_rec student1;
    struct student_rec *p;
    int i;

    p = &student1;

    printf("Enter student details\n");
    printf("\nEnter ID\n");
    scanf("%d", &p->student_ID);
    printf("\nEnter First Name\n");
    scanf("%s", &p->first_name);
    printf("\nEnter Last Name\n");
    scanf("%s", &p->last_name);
    printf("\nEnter results\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &p->results[i]);
    }

    return 0;
}


________________________________________________

#include <stdio.h>
#include <string.h>
#define SIZE 5

// Structure templates
struct date
{
    int day;
    int month;
    int year;
};

struct student_rec
{
    int student_ID;
    char first_name[11];
    char last_name[21];
    struct date DOB; // <-- This is the nested structure
};

int main()
{
    struct student_rec student1;

    student1.student_ID = 100;
    scanf("%s", student1.first_name);
    scanf("%s", student1.last_name);
    student1.DOB.day = 14;
    student1.DOB.month = 3;
    student1.DOB.year = 2018;


    return 0;
}
