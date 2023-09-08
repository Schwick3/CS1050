#include <stdlib.h>
#include <stdio.h>

#define LENGTH 256

void getString(char string[]);
int getLength(char string[]);
char *reString(char string[], int size);

int main()
{
    char string[LENGTH];

    getString(string);
    printf("Your string is: %s", string);
    printf("\nLength of string: %d", getLength(string));
    printf("\nReverse of your string is: %s", reString(string, getLength(string)));
    return 0;
}

void getString(char string[])
{
    printf("\nPlease enter a string: ");
    scanf("%255s", string);
}

int getLength(char string[])
{
    int size = 0;
    int i;
    for (i = 0; *(string + i) != '\0'; i++)
    {
        size++;
    }

    size /= sizeof(string[0]);
    return size;
}

char *reString(char string[], int size)
{
    int i;
    int j;
    char nstring[LENGTH];
    j = size - 1;
    for (i = 0; i < size; i++)
    {
        *(nstring + i) = *(string + j);
        j--;
    }

    for (i = 0; i < size; i++)
    {
        *(string + i) = *(nstring + i);
    }

    return string;
}
