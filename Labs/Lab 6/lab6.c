/********************
Skylar Perry        *
October 7th 2022    *
CS 1050             *
Lab 6               *
********************/

#include <stdio.h>

int main()
{
    int oddnums[50];
    int i;
    int j = 0;
    int k;
    int x;
    int y;
    int evensum = 0;
    int oddsum = 0;
    float evenavg;
    float oddavg;
    int counter1 = 0;
    int counter2 = 0;

    for (i = 1; i <= 99; i += 2) // sets values of array to odd numbers
    {
        oddnums[j] = i;
        j++;
    }

    for (y = 0; y < 50; y++) // prints values of the array to terminal
    {
        printf("array [%d] = %d ", y, oddnums[y]);
    }

    for (k = 0; k < 50; k += 2) // gets even sum and starts counter for average
    {
        evensum += oddnums[k];
        counter1++;
    }

    evenavg = evensum / counter1; // gets even average

    printf("\ntotal of even indexed numbers = %d,", evensum);   // prints sum of even indexes
    printf(" average of even indexed numbers = %.2f", evenavg); // prints average of even indexes

    for (x = 1; x < 50; x += 2) // gets odd sum and starts counter for average
    {
        oddsum += oddnums[x];
        counter2++;
    }

    oddavg = oddsum / counter2; // gets odd average

    printf("\ntotal of odd indexed nums = %d, ", oddsum);    // prints sum of odd indexes
    printf("average of odd indexed numbers = %.2f", oddavg); // prints average of odd indexes
}