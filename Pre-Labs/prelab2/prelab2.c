#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A, B, C, D;
    printf("Enter four non-zero intergers: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if (A == 0 || B == 0 || C == 0 || D == 0)
    {
        printf("Sorry, you entered zero for an interger, please try again. ");
    }
    else
    {
        printf("\nA= %d\nB= %d\nC= %d\nD= %D", A, B, C, D);

        printf("\nB+C= %d\nA*D= %d", B + C, A * D);
        printf("\nQuotient of A/C= %d\nRemainder of C/D= %d", A / C, C % D);
        printf("\n(A*C)/(B+D)= %d", (A * C) / (B + D));
    }

    return 0;
}