/********************
Skylar Perry        *
October 21th 2022   *
CS 1050             *
Lab 8               *
********************/

#include <stdio.h>

void GetIntArray(int *outputArray, int *count);
void PrintArray(int *array, int count);
int TotalArray(int *array, int count);
double AvgArray(int *array, int count);

int main(void)
{
    int count;
    int array[100];
    int *outputArray = array;
    int *pcount = &count;

    printf("******************\n Welcome to Lab 8\n******************\n");
    GetIntArray(outputArray, pcount);
    PrintArray(outputArray, count);
    printf("\nTotal of array = %d", TotalArray(array, count));
    AvgArray(outputArray, count);
    printf("\nAverage of array = %.3lf", AvgArray(array, count));

    return 0;
}

void GetIntArray(int *outputArray, int *count)
{

    int i;
    printf("How many intergers would you like to enter? \n");
    scanf("%d", count);

    for (i = 0; i < *count; i++)
    {
        printf("\nEnter interger #%d: ", i + 1);
        scanf("%d", &outputArray[i]);
    }
}
void PrintArray(int *array, int count)
{
    int i;
    printf("\nHere are the %d elements in your array:", count);
    for (i = 0; i < count; i++)
    {
        printf("\n     array[%d] = %d", i, array[i]);
    }
}
int TotalArray(int *array, int count)
{
    int i;
    int total = 0;

    for (i = 0; i < count; i++)
    {
        total += array[i];
    }

    return total;
}
double AvgArray(int *array, int count)
{
    int i;
    double avg = 0;
    double dcount = count;

    for (i = 0; i < count; i++)
    {
        avg += array[i];
    }

    avg = avg / dcount;

    return avg;
}