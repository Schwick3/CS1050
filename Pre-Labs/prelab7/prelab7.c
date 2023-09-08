#include <stdio.h>

#define COLS 3
#define ROWS 12

void print2Darray(int testGrades[][COLS], int rows);
int printColAvg(int testGrades[][COLS], int whichCol);
int printRowAvg(int testGrades[][COLS], int whichRow);

int main(void)
{
    int rows = 12;
    int whichCol = 0;
    int whichRow = 0;
    float colAvg, rowAvg;

    int testGrades[ROWS][COLS] = {{72, 68, 62}, {95, 88, 95}, {93, 97, 86}, {98, 77, 98}, {99, 92, 90}, {47, 32, 27}, {97, 99, 85}, {85, 95, 91}, {96, 91, 99}, {94, 90, 85}, {98, 98, 90}, {76, 82, 98}};

    print2Darray(testGrades, rows);

    printColAvg(testGrades, whichCol);

    printRowAvg(testGrades, whichRow);

    return 0;
}

void print2Darray(int testGrades[][COLS], int rows)
{
    int i, j;

    printf("\n\n\n\nThe Matrix");
    printf("\n_______________\n");

    for (i = 0; i < ROWS; i++)
    {
        printf("Row %d: ", i + 1);

        for (j = 0; j < COLS; j++)
        {
            printf("%d ", testGrades[i][j]);
        }

        printf("\n");
    }
}

int printColAvg(int testGrades[][COLS], int whichCol)
{
    int i;
    float colAvg;
    int counter;
    printf("The Column Averages");
    printf("\n___________________________________");

    while (whichCol < 3)
    {
        colAvg = 0;

        for (i = 0; i < ROWS; i++)
        {
            colAvg += testGrades[i][whichCol];
        }

        colAvg = colAvg / i;

        printf("\nThe Average of column %d = %f", whichCol + 1, colAvg);

        whichCol++;
    }
    return colAvg;
}

int printRowAvg(int testGrades[][COLS], int whichRow)
{
    int i;

    float rowAvg;
    int counter;

    printf("\n\nThe Row Averages");
    printf("\n________________________________");
    while (whichRow < 12)
    {
        rowAvg = 0;

        for (i = 0; i < COLS; i++)
        {
            rowAvg += testGrades[whichRow][i];
        }

        rowAvg = rowAvg / i;
        printf("\nThe Average of row %d = %f", whichRow + 1, rowAvg);
        whichRow++;
    }
    return rowAvg;
}