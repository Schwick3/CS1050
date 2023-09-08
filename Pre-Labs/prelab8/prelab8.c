#include <stdio.h>

void getCount(int *outputInt);
void getIntergerArray(int *outputIntArray, int count);
void printArray(int a[], int size);

int main()
{
    int count;
    int size;
    int *outputInt = &count;
    printf("********************\nWelcome to PreLab 8\n********************\n");
    getCount(outputInt);
    int a[count];
    int *outputIntArray = a;
    getIntergerArray(outputIntArray, count);
    size = count;
    printArray(a, size);
}

void getCount(int *outputInt)
{
    printf("How many intergers would you like to enter? \n");
    scanf("%d", outputInt);
}

void getIntergerArray(int *outputIntArray, int count)
{
    int i;
    int num;
    for (i = 0; i < count; i++)
    {
        printf("\nEnter interger #%d: ", i + 1);
        scanf("%d", &outputIntArray[i]);
    }
}

void printArray(int a[], int size)
{
    int i;
    printf("\nYou entered an array with %d elements:", size);
    for (i = 0; i < size; i++)
    {
        printf("\narray[%d] = %d", i, a[i]);
    }
}
