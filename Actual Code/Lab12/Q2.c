/*
 Program Description:
 Lab 12 - Question 2
 
 Author:
 Eoghan Byrne
 
 Date:
 8th March 2018
 */

#include <stdio.h>
#include <string.h>

// Prototypes
int find_is(char[]);
int calc_num(char[]);
void append(char[]);

int main()
{
    char sentence[50];
    int number_is = 0;
    int char_num = 0;

    printf("Enter a sentence\n");
    gets(sentence);

    // Part (a)
    number_is = find_is(sentence);
    printf("The word \"is\" occurs %d times\n", number_is);

    // Part (b)
    char_num = calc_num(sentence);
    printf("\nThe are %d characters\n", char_num);

    // Part (c)
    append(sentence);


    return 0;
}

// Implementing
int find_is(char sen[])
{
    int num = 0;
    int counter = 0;
    int i = 0;

    for (i = 0; i < strlen(char sen); i++)
    {
    //  if (sen[i] == '' && sen[i+1] = 'i' && sen[i+2] = 's' && (sen[i+3] == '\0'))
        if (sen[i] == ' ' && sen[i+1] = 'i' && sen[i+2] = 's' && sen[i+3] == ' ')
        {
            counter++;
        } // end if
    } // end for
    return counter;
}

// Implementing
int calc_num(char sen[])
{
    int number;
    number = strlen(sen);
    return number;
}

// Implementing
void append(char sen[])
{
    char temp_sen[50] = "My sentence is ";
    strcat(temp_sen, sen);
    puts(temp_sen);
}




