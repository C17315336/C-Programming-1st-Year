/*
 Program Description:
 Sturctures ending +
 FILE IO
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 21st March 2018
 */

#include <stdio.h>
#include <string.h>

// Structure templates
struct person
{
    int a;
    float b;
};


int main()
{
    struct person student1, student2;

    if (student1.a == student2.a && student1.b == student2.b)
    {
        /* code */
    }
    
    return 0;
} // end main


________________________________________________________________________

/*

    - TEXT   --> ASCII
    - BINARY

    Opening and closing a file

    Mode            Meaning
    "r"             - Open a text file to read only
                    - The file must already exist or else NULL return
    "w"             - Open a text file to write only
                    - The file is created if it doesn't exist
                    - An already existing file is overwritten!!!
    "a"             - Open a text file to write only
                    - Data is appended to the end of the file
                    - The file is created if it doesn't exist
    "r+"            - Open a text file to both read and write
                    - The file must already exist or else NULL return
    "w+"            - Open a text file to both read and write
                    - The file is created if it doesn't exist
    "a+"            - Open a text file to write only
                    - Data is appended to the end of the file
                    - The file is created if it doesn't exist

*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;

    // Open a file
    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        printf("Did not open file\n");
    } // end if
    else
    {
        printf("Opened file successfully\n");
        fclose(fp);
    } // end else
    
    return 0;
} // end main


________________________________________________________________________

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;

    char char_in;

    if ((fp = fopen("/Users/Eoghan/Desktop/Test/DIT 5th/DIT 5th/file.txt", "r")) == NULL)
    {
        printf("Did not open file\n");
    } // end if
    else
    {
        while((char_in = fgetc(fp)) != EOF)
        {
            printf("%c", char_in);
        } // end while
        fclose(fp);
    } // end else
    
    return 0;
} // end main


________________________________________________________________________

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp_in, *fp_out;
    
    char char_in;
    
    // 2 Variables
    //       The Text  The Location
    // fputc(char_out, fp);
    
    if ((fp_in = fopen("/Users/Eoghan/Desktop/Test/DIT 5th/DIT 5th/file1.txt", "r")) == NULL)
    {
        printf("Did not open file\n");
    } // end if
    else if ((fp_out = fopen("/Users/Eoghan/Desktop/Test/DIT 5th/DIT 5th/file2.txt", "w")) != NULL)
    {
        while((char_in = fgetc(fp_in)) != EOF)
        {
            fputc(char_in, fp_out);
        } // end while
        fclose(fp_in);
        fclose(fp_out);
    } // end else
    
    return 0;
} // end main




