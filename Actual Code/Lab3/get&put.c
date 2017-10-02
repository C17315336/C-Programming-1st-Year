/*
 Program Description:
 getchar and putchar functions
 
 Author:
 Eoghan Byrne
 
 Date:
 1st October 2017
 */

#include <stdio.h>

int main()
{
    
    // Creating 2 variables
    char ch1;
    char ch2;
    

    // Printing to standard output both text in a form of questions and prompts
    // as well as recieving from standard input
    printf("Please enter two characters (Note to press enter after each one)\n");
    printf("Character 1;\n");
    ch1 = getchar();
    printf("\nCharacter 2;\n");
    ch2 = getchar();
    
    
    // Printing out answers
    printf("\nYou have entered:\n ");
    putchar(ch1);
    printf("\nand\n ");
    putchar(ch2);
    
    return 0;
    
}





/*
 Program Description:
 getchar and putchar functions
 
 Author:
 Eoghan Byrne
 
 Date:
 1st October 2017
 */

#include <stdio.h>

int main()
{
    
    // Creating 2 variables
    char ch1;
    char ch2;
    

    // Printing to standard output both text in a form of questions and prompts
    // as well as recieving from standard input
    printf("Please enter two characters (Note to press enter after each one)\n");
    printf("Character 1;\n");
    ch1 = getchar();
    flushall();
    printf("\nCharacter 2;\n");
    ch2 = getchar();
    flushall();
    
    
    // Printing out answers
    printf("\nYou have entered:\n ");
    putchar(ch1);
    printf("\nand\n ");
    putchar(ch2);
    
    getchar();
    return 0;
    
}

