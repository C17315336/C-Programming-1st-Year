/*
 Program Description:
 Strings
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 14th February 2018
 */

/*
    printf("Hello World") <-- The double quotes here is a string literal

    "a"
    'a'
    \n <-- New Line
    \t <-- Tab
    \0 <-- Null Terminator
           Null Character

    If you forget the \0 or even fill an array of incorrect size
    it will return as a non mull-terminated string

    Challenge to write:
    "This is great", said the student.
    printf(""This is great", said the student.");
    printf("\"This is great\", said the student.")

    "C:\ is the root drive", he said.
    printf("\"C:\\ is the root drive\", he said");
*/

/*
    Long Character Strings
    "This is a very long sentance to display"

    printf("This is a very long sentence to display");
    
    printf("This is a ve\
           ry long sentence t\
           o display");

    printf("This is a ve"
           "ry long sentence t"
           "o display");
*/

/*
    char greeting[6] = {'H','e','l','l','o','\0'};
    char greeting[6] = "Hello";

    char greeting[] = {'H','e','l','l','o','\0'};
    char greeting[] = "Hello";

    How to Display;
    char greeting[6] = "Hello";

    printf("%s", greeting);
*/


#include <stdio.h>

int main()
{
    char greeting[6] = "Hello";



    
    return 0;
} // end main()



