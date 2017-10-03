#include <stdio.h>

int main()
{

    int A = 0;
    int B = 0;
    int C = 0;

    printf("Please enter two integers (Note to press enter after each one)\n");
    printf("Number 1;\n");
    scanf("%d", &A);
    printf("\nNumber 2;\n");
    scanf("%d", &B);
    flushall();

    C = A + B

    printf("\n\nYour sum of %d + %d is equal to: %d\n", A, B, C);

    getchar();

    return 0;
    
}