/*
 Program Description:
 Exam Questions
 
 Author:
 Michael Collins
 Eoghan Byrne
 
 Date:
 29th November 2017
 */

// Exam questions
/*
 Using a printf statement how would you output this
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\"Done, Like a Boss\", said the student.");
    
    return 0;
}

________________________________________________________

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%5.2d", 12.34);
    
    return 0;
}

________________________________________________________

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 4, y, z;

    y = --x;
    z = x++;

    printf("%d %d %d\n", x, y, z);
    
    return 0;
}

________________________________________________________

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numbers[3] = {1.1, 1.2, 1.3};
    int i;

    for (i = 0; i < 3; ++i)
    {
    	printf("%f\n", *(numbers +i));
    } // end for
    
    return 0;
}

