/********************
Skylar Perry        *
October 14th 2022   *
CS 1050             *
Lab 7               *
********************/
#include <stdio.h>

// defining symbolic constants
#define ROWS 12
#define COLS 3
#define CROWS 4

// function prototypes
void print2Darray(int testGrades[][COLS], int rows);
void printCurve(int curve[][COLS]);
char cutoff(int testGrades[][COLS], int curve[][COLS], int i, int j);
void printGrades(int testGrades[][COLS], int curve[][COLS]);

int main()
{
    int rows = 0;
    int testGrades[ROWS][COLS] = {{72, 68, 62}, {95, 88, 95}, {93, 97, 86}, {98, 77, 98}, {99, 92, 90}, {47, 32, 27}, {97, 99, 75}, {85, 95, 91}, {96, 91, 99}, {94, 90, 74}, {98, 98, 90}, {76, 82, 98}}; // initializing testGrades array
    int curve[CROWS][COLS] = {{85, 90, 90}, {75, 80, 75}, {60, 70, 55}, {50, 60, 40}};                                                                                                                     // initializing curve array

    print2Darray(testGrades, rows); // runs funciton to print test scores
    printCurve(curve);              // runs function to print test curve cutoffs
    printGrades(testGrades, curve); // runs function to print letter grades
}

char cutoff(int testGrades[][COLS], int curve[][COLS], int i, int j)
{
    char grade;

    if (testGrades[i][j] >= curve[0][j]) // if testGrades is greater than the A cuttoff the letter grade is A
        grade = 'A';
    else if (testGrades[i][j] >= curve[1][j]) // if testGrades is greater than the B cuttoff the letter grade is B
        grade = 'B';
    else if (testGrades[i][j] >= curve[2][j]) // if testGrades is greater than the C cuttoff the letter grade is C
        grade = 'C';
    else if (testGrades[i][j] >= curve[3][j]) // if testGrades is greater than the D cuttoff the letter grade is D
        grade = 'D';
    else // if testGrades is greater than no cuttoff the letter grade is F
        grade = 'F';
    printf("%c", grade);
    return 0;
}
void print2Darray(int testGrades[][COLS], int rows)
{
    int i, j;

    printf("\n\n\n\nHere are the scores: ");

    for (i = 0; i < ROWS; i++) // loops through each row
    {
        printf("\nRow %d: ", i + 1);

        for (j = 0; j < COLS; j++) // loops through each column
        {
            printf("%d ", testGrades[i][j]); // prints the test grade of the row and column location
        }

        printf("\n");
    }
}

void printCurve(int curve[][COLS])
{
    int i, j;

    printf("\nHere are the grade cutoffs: ");

    for (i = 0; i < CROWS; i++) // loops through each row of the cuttoff function array
    {
        printf("\nRow %d: ", i + 1);

        for (j = 0; j < COLS; j++) // loops through each column
        {
            printf("%d ", curve[i][j]); // prints the test cuttoff of the row and column location
        }

        printf("\n");
    }
}

void printGrades(int testGrades[][COLS], int curve[][COLS])
{
    int i, j;

    printf("\nHere are the grades: ");

    for (i = 0; i < ROWS; i++) // loops through each row
    {
        printf("\nStudent %d: ", i + 1); // loops through each column

        for (j = 0; j < COLS; j++)
        {

            printf("%c ", cutoff(testGrades, curve, i, j)); // calls to the function that determines and prints letter grade
        }

        printf("\n");
    }
}
