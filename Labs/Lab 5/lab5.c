/********************
Skylar Perry        *
September 30th 2022 *
CS 1050             *
Lab 5               *
********************/
#include <stdio.h>

int sumation(int n);

int main(void)
{
    int n;
    int counter;

    printf("Enter a limit: ");
    scanf("%d", &n);

    for (counter = 1; counter <= n; counter++)
    {
        printf("\n The Sumation of 1 through %d squared=%d", counter, sumation(counter));
    }

    return 0;
}

int sumation(int n)
{
    int sum = 0;
    int control;
    int squared;

    for (control = 0; control <= n; control++)
    {
        squared = control * control;
        sum = sum + squared;
    }
    return sum;
}
