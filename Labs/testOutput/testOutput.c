#include <stdio.h>
#include <string.h>

#define SIZE 256

void checkOutput(char *a, char *b);

int main()
{
    char desiredOutput[SIZE];
    char output[SIZE];

    printf("\nEnter output: ");

    fgets(output, 256, stdin);

    printf("\nEnter desired output: ");

    fgets(desiredOutput, 256, stdin);

    checkOutput(desiredOutput, output);

    return 0;
}

void checkOutput(char *a, char *b)
{

    if (strcmp(a, b) == 0)
    {
        printf("\nYes, output matches.");
    }

    else
        printf("\nNo, output does not match.");
}