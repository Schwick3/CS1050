/********************
Skylar Perry        *
November 11th, 2022 *
CS 1050             *
Lab 10              *
********************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// symbolic constant to define SIZE
#define SIZE 256

// function prototypes
char *killwhitespace(char *t);
char *killpunc(char *t);
char *convertCase(char *t);
char *doesAllFunc(char *t);

int main(void)
{
    // defining strings
    char string0[SIZE] = " 1, 2, 3, 4 tell me that you love me more. Sleepless long nights, that is what my youth was for.";
    char string1[SIZE] = "     99 dreams I have had. In every 1 a red balloon.";
    char string2[SIZE] = "And you'll start cryin' 96 tears.";
    char string3[SIZE] = "I demand the sum of.....$1,000,000.00!";

    // printing off all strings
    printf("\n#0: %s", string0);
    printf("\n#1: %s", string1);
    printf("\n#2: %s", string2);
    printf("\n#3: %s", string3);

    // runs functions to change strings
    doesAllFunc(string0);
    doesAllFunc(string1);
    doesAllFunc(string2);
    doesAllFunc(string3);

    // prints off modified strings
    printf("\n#0: %s", string0);
    printf("\n#1: %s", string1);
    printf("\n#2: %s", string2);
    printf("\n#3: %s", string3);

    return 0;
}

char *killwhitespace(char *t) // function from prelab to kill all whitspace
{
    int i;
    int j;

    for (i = 0; t[i] != '\0'; i++) // iterates through each element of the array, stopping at the null terminator
    {
        if (isspace(t[i])) // checks to see if the current element is whitespace
        {
            for (j = i; t[j] != '\0'; j++)
            {
                t[j] = t[j + 1]; // if the current element is whitespace, makes it into the next element
            }
            i--; // decrements i to force the function to go back and check t[i] again
        }
    }

    return t;
}

char *killpunc(char *t) // modified kill all whitespace function, changed to kill punctuation
{
    int i;
    int j;

    for (i = 0; t[i] != '\0'; i++)
    {
        if (ispunct(t[i]))
        {
            for (j = i; t[j] != '\0'; j++)
            {
                t[j] = t[j + 1];
            }
            i--;
        }
    }

    return t;
}

char *convertCase(char *t) // function to change the case of letter
{
    int i;
    for (i = 0; t[i] != '\0'; i++)
    {
        if (isupper(t[i])) // if isupper is true converts the element to lowercase
        {
            t[i] = tolower(t[i]);
        }
        else if (islower(t[i])) // if islower is true converts the element to uppercase
        {
            t[i] = toupper(t[i]);
        }
    }

    return t;
}

char *doesAllFunc(char *t) // function that does every other function
{
    killwhitespace(t);
    killpunc(t);
    convertCase(t);

    return t;
}