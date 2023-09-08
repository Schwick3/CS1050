/********************
Skylar Perry        *
September 2nd 2022  *
CS 1050             *
Lab 2               *
********************/

#include <stdio.h>

int main(void)
{
    // declaring variables
    int x, y;
    // telling user what to do
    printf("Enter two intergers: ");
    // assigning user input to variables
    scanf("%d %d", &x, &y);
    // printing the intergers the user entered
    printf("x = %d, y= %d\n", x, y);
    // doing calculations with the variables
    printf("x*y = %d\n", x * y);
    printf("x/y = %d\n", x / y);
    printf("(x+1)*y = %d\n", (x + 1) * y);
    // printing variables a second time to make sure they havent changed
    printf("x = %d, y = %d\n", x, y);

    return 0;
}