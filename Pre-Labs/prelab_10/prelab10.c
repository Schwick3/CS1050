#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

char *killwhitespace(char *t);
int main()
{
    char string[SIZE];
    printf("Enter a string with white space: ");

    fgets(string, 100, stdin);

    printf("\nYour string is: %s", string);

    printf("\nYour string without whitespace is: %s", killwhitespace(string));
}

char *killwhitespace(char *t)
{
    int i;
    int j;

    for (i = 0; t[i] != '\0'; i++)
    {
        if (isspace(t[i]))
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
