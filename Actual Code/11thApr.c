/*
 Program Description:
 Reading a string of 
 characters from a file
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 11th April 2018
 */

/*
    fgets();
    fgets(char_array_name, MAC_CHAR, file_pointer)
          Local array       Max char  Pointer file
*/

#include <stdio.h>
#include <string.h>
#define MAX_CHARS 81


int main()
{
    FILE *fp_in;
    char one_line[MAX_CHARS];

    // Open file
    if ((fp_in = fopen("file.txt", "r")) == NULL)
    {
        printf("Error opening\n");
    } // end if
    else
    {
        /*
            Read at most MAx_CHARS-1 characters from the file 
            OR until a new_line character (\n) is read 
            OR the end of file is read
        */
        while(fgets(one_line, MAX_CHARS, fp_in) != NULL)
        {
            printf("%s", one_line);
        } // end while
        fclose(fp_in);
    } // end else   
    return 0;
} // end main

________________________________________________________________

/*
    fputs();
    fputs(char_array_name, file_pointer)
          Local array      Pointer file
*/

#include <stdio.h>
#include <string.h>
#define MAX_CHARS 81


int main()
{
    FILE *fp_in, *fp_out;
    char one_line[MAX_CHARS];

    // Open file
    if ((fp_in = fopen("file.txt", "r")) == NULL)
    {
        printf("Error opening\n");
    } // end if
    else if ((fp_out = fopen("new.txt", "w")) =! NULL)
    {
        /*
            Copy the contents (string by string) from file.txt to new.txt
        */
        while(fgets(one_line, MAX_CHARS, fp_in) != NULL)
        {
            fputs(one_line, fp_out);
        } // end while
        fclose(fp_in);
        fclose(fp_out);
    } // end else   
    return 0;
} // end main






