/*
 Program Description:
 Deleting a file
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 12th April 2018
 */

/*
    remove();
    returns 0 if the file deleted successfully
    returns -1 if not deleted
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char file[81];
    int return_code = 1;

    printf("Enter file to delete\n");
    scanf("%s", file);

    return_code = remove(file);

    if (return_code == 0)
    {
        printf("File delted\n");
    } // end if
    else
    {
        printf("Cannot delete file %s\n", file);
    } // end else
    return 0;
} // end main
