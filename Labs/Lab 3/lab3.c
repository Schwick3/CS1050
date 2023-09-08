/********************
Skylar Perry        *
September 9th 2022  *
CS 1050             *
Lab 3               *
********************/

#include <stdio.h>

int main(void)
{
    int x; // declaring variable
    int choice;

    printf("Enter 1 for accending to 100\nEnter -1 for decending from 100\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        for (x = 100; x >= 2; x -= 2) // starting for loop
        {
            if (x % 3 == 0) // if statement to see if variable is divisible by 3
            {
                printf("T"); // print T if true
            }
            if (x % 7 == 0) // if statement to see if variable is divisible by 7
            {
                printf("S"); // print S if true
            }
            printf("%d ", x); // prints the variable at end of loop
        }
    }

    if (choice == -1)
    {
        for (x = 0; x <= 100; x += 2) // starting for loop
        {
            if (x % 3 == 0) // if statement to see if variable is divisible by 3
            {
                printf("T"); // print T if true
            }
            if (x % 7 == 0) // if statement to see if variable is divisible by 7
            {
                printf("S"); // print S if true
            }
            printf("%d ", x); // prints the variable at end of loop
        }
    }
    else
        printf("Sorry, you didnt enter 1 or -1, please try again.");
    return 0;
}