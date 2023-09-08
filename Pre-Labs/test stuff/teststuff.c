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

int main(void)
{
    int size;
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

    printf("%s", movies[0].title);

    return 0;
}