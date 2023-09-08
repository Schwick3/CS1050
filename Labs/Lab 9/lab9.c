/********************
Skylar Perry        *
November 4th, 2022  *
CS 1050             *
Lab 9               *
********************/

#include <stdlib.h>
#include <stdio.h>

#define LENGTH 256 // symbolic constant for total string length

// function prototypes
void getString(char *string);
int getLength(char *string);
char *evenReString(char *string, int size);
char *oddReString(char *string, int size);

int main()
{
    char string[LENGTH]; // declares string array
    int length;          // declares length of function

    printf("\n*** Hello, welcome to lab nine! ***");
    getString(string); // runs function to get string from user

    length = getLength(string); // runs function to get length of string, and sets length to it

    if (length % 2 == 0) // if length is even runs the function for even strings
    {
        printf("The modified string is: %s", evenReString(string, length));
    }

    else // else runs the function for odd strings
    {
        printf("The modified string is: %s", oddReString(string, length));
    }

    printf("\n*** Thank you for coming to lab nine! ***");

    return 0;
}

void getString(char *string) // simple function to get string from user
{
    printf("\nPlease enter a string: ");
    scanf("%255s", string);
}

int getLength(char *string) // simple function to get the length of user entered string
{
    int size = 0;
    int i;
    for (i = 0; *(string + i) != '\0'; i++) // stops before null character
    {
        size++;
    }

    size /= sizeof(*(string + 0));
    return size;
}

char *evenReString(char *string, int size)
{
    int i;
    int j;
    int k;
    int halfSize = size / 2; // cuts size in half to seperate string into two halves
    char nchar;

    size = size - 1; // lowers size by one to prevent the null terminator from being put into new strings
    k = halfSize;

    for (i = 0; i < halfSize; i++) // gets the first half of new reversed string
    {
        nchar = *(string + i);
        *(string + i) = *(string + k);
        *(string + k) = nchar;
        j--;
    }

    k = halfSize;
    j = halfSize + 1;
    for (i = size; i >= halfSize; i--) // gets the second half of new reversed string
    {
        nchar = *(string + j);
        *(string + j) = *(string + i);
        *(string + i) = nchar;

        k++;
    }

    return string;
}

char *oddReString(char *string, int size)
{
    int i;
    int j;
    int k;
    int halfSize = size / 2; // cuts size in half to split the string into to parts

    char nstring[halfSize];  // first half of new reversed string
    char nstring2[halfSize]; // second half of new reversed string

    char midChar = *(string + halfSize); // special varible for the middle character, is set the the middle of the string

    size = size - 1; // lowers size by one to prevent null terminator from being entered into new strings
    j = halfSize - 1;

    for (i = 0; i < halfSize + 1; i++)
    {

        *(nstring + i) = *(string + j);
        j--;
    }

    k = 0;

    for (i = size; i > halfSize; i--)
    {
        *(nstring2 + k) = *(string + i);

        k++;
    }

    for (i = 0; i < halfSize; i++) // first half of string to be nstring, stoping at the middle
    {
        *(string + i) = *(nstring + i);
    }

    k = 0;

    for (i = (halfSize + 1); i <= size; i++) // sets second half of string to be nstring2, starting at the middle
    {
        *(string + i) = *(nstring2 + k);

        k++;
    }

    *(string + halfSize) = midChar; // sets the middle of the reversed string to be the middle character of the old string

    return string; // returns the reversed string
}