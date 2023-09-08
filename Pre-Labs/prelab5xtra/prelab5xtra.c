#include <stdio.h>
#include <stdlib.h>

double myPow(int x, int y);

int main(void)
{
    int x, y;
    double result;
    printf("\nEnter the interger: ");
    scanf("%d", &x);

    printf("\nEnter the exponent: ");
    scanf("%d", &y);

    result = myPow(x, y);

    printf("%.0lf", result);
}

double myPow(int x, int y)
{

    double result = x;

    while (y > 1)
    {
        result = result * x;
        y--;
    }

    return result;
}