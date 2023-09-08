#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // define variables
    int x;

    // begin for loop
    for (x = 1; x < 50; x++)
    {
        // print when x is divisible by both 5 and 3
        if (x % 5 == 0 && x % 3 == 0)
        {
            printf("Fizz Buzz, ");
        }
        // print when x is only divisible by 5
        else if (x % 5 == 0)
        {
            printf("Buzz, ");
        }
        // print when x is only divisible by 3
        else if (x % 3 == 0)
        {
            printf("Fizz, ");
        }
        // print when x is not divisible by 5 or 3
        else
        {
            printf("%d, ", x);
        }
    }
    // print Buzz for 50 because it is only divisible by 5
    printf("Buzz");

    return 0;
}