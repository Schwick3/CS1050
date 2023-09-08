/*****************************************************************************
 * Prelab 11
 * CS1050
 * FS 2022
 *****************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 256

typedef struct _Movie
{
    char title[256];
    long gross;
    int year;
} Movie;

void sort(Movie *movies, int size);
void swap(char *a, char *b);
void swapInt(int a, int b);
void swapLong(long a, long b);

int main(void)
{
    int size;
    char a[10] = "Movie";
    char b[10] = "Year";
    char c[10] = "Gross";
    Movie movies[] =
        {
            {"Gone_with_the_Wind", 3713000000, 1939},
            {"Avatar", 3263000000, 2009},
            {"Titanic", 3087000000, 1997},
            {"Star_Wars", 3049000000, 1977},
            {"Avengers:_Endgame", 2798000000, 2019},
            {"The_Sound_of_Music", 2554000000, 1965},
            {"E.T._the_Extra-Terrestrial", 2493000000, 1982},
            {"The_Ten_Commandments", 2361000000, 1956},
            {"Doctor_Zhivago", 2238000000, 1965},
            {"Star_Wars:_The_Force_Awakens", 2206000000, 2015},
            {"Snow_White", 2150000000, 1937},
            {"Jurassic_Park", 2100000000, 1993},
            {"Jaws", 2100000000, 1975},
            {"Avengers:_Infinity_War", 2050000000, 2018},
            {"The_Exorcist", 2000000000, 1973},
        };

    size = 15;

    Movie *mPtr = movies;

    printf("\n\n\nHighest Grossing Movies");
    printf("\n******************");
    printf("\n%-35s %-15s %s", a, b, c);
    for (int i = 0; i < size; i++)
    {
        printf("\n%-35s %-15d $%-30ld", movies[i].title, movies[i].year, movies[i].gross);
    }
    printf("\n******************\n");

    sort(mPtr, size);

    printf("\nMovies in Alphabetical Order");
    printf("\n******************");
    printf("\n%-35s %-15s %s", a, b, c);
    for (int i = 0; i < size; i++)
    {
        printf("\n%-35s %-15d $%-30ld", movies[i].title, movies[i].year, movies[i].gross);
    }
    printf("\n******************");

    return 0;
}

void swap(char *a, char *b)
{
    char temp[SIZE];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void swapInt(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapLong(long a, long b)
{
    long temp;
    temp = a;
    a = b;
    b = temp;
}

void sort(Movie *movies, int size)
{
    int i, j;
    long lTemp;
    int iTemp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (strcmp(movies[j].title, movies[j + 1].title) > 0)
            {
                swap(movies[j].title, movies[j + 1].title);

                lTemp = movies[j].gross;
                movies[j].gross = movies[j + 1].gross;
                movies[j + 1].gross = lTemp;

                iTemp = movies[j].year;
                movies[j].year = movies[j + 1].year;
                movies[j + 1].year = iTemp;
            }
        }
    }
}
