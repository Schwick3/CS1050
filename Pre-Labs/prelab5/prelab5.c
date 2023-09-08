#include <stdio.h>
#include <math.h>

long factorial(int n);

double bigE(void);

int main(void)
{
    double e;
    int y;

    e = bigE();

    printf("\ne=%.10f", e);
    printf("\nEnter an interger: ");
    scanf("%d", &y);

    printf("e to the %d power=%.3lf", y, pow(e, y));

    return 0;
}

long factorial(int n)
{
    long result = 1;
    for (int i = n; i > 1; i--)
    {
        result *= i;
    }
    return result;
}

double bigE(void)
{
    double e = 1;
    double i;
    double partE;
    double term = 1;
    double facty;
    for (i = 1; i < 20; i++)
    {
        facty = factorial(i);

        e += 1 / facty;
    }

    return e;
}
