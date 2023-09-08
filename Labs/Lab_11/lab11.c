/********************
Skylar Perry        *
November 16th, 2022 *
CS 1050             *
Lab 11              *
********************/

#include <stdio.h>
#include <string.h>

typedef struct _Team
{
    char city[256];
    char name[256];
} Team;

typedef struct _Player
{
    char firstName[256];
    char lastName[256];
    long salary;
    Team team;
} Player;

#define SIZE 256

// function prototypes
void sortFirstName(Player *players, int size);
void sortlastName(Player *players, int size);
void sortSalary(Player *players, int size);
void printArray(Player *players, int size);
void swap(char *a, char *b);

int main(void)
{
    Player players[] =
        {
            {"Corey", "Seager", 32500000, {"Texas", "Rangers"}},
            {"Stephen", "Strasburg", 35000000, {"Washington", "Nationals"}},
            {"Gerrit", "Cole", 36000000, {"New York", "Yankees"}},
            {"Mike", "Trout", 35500000, {"Los Angeles", "Angels"}},
            {"Carlos", "Correa", 35100000, {"Minnesota", "Twins"}},
            {"Anthony", "Rendon", 35000000, {"Los Angeles", "Angels"}},
            {"Francisco", "Lindor", 34100000, {"New York", "Mets"}},
            {"Trevor", "Bauer", 34000000, {"Los Angeles", "Dodgers"}},
            {"Nolan", "Arenado", 32500000, {"St. Louis", "Cardinals"}},
            {"Max", "Scherzer", 43300000, {"New York", "Mets"}},
        };
    Player *playerPtr = players; // point to player struct

    int size = 10; // sets size equal to number of players

    printf("\nPlayers: ");
    printArray(players, size); // runs function to print stucture

    sortFirstName(playerPtr, size);

    printf("\n\nPlayers Sorted By First Name:");
    printArray(players, size); // runs function to print stucture

    sortlastName(playerPtr, size);

    printf("\n\nPlayers Sorted By Last Name:");
    printArray(players, size); // runs function to print stucture

    sortSalary(playerPtr, size);

    printf("\n\nPlayers Sorted By Salary:");
    printArray(players, size); // runs function to print stucture
}

void swap(char *a, char *b) // function to swap strings in an array
{
    char temp[SIZE]; // temp array to store value
    strcpy(temp, a); // copies string a to temp
    strcpy(a, b);    // copies string b to a
    strcpy(b, temp); // copies temp string to b
}

void sortFirstName(Player *players, int size) // main sorting function, modified bubble sort
{
    int i, j;
    long lTemp; // temportary long variable to store salary

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (strcmp(players[j].firstName, players[j + 1].firstName) > 0) // compares first name of j to first name of j+1, runs if j+1 is greater alphabeticaly
            {
                // swap functions to sawp all of the string portions of each player
                swap(players[j].firstName, players[j + 1].firstName);
                swap(players[j].lastName, players[j + 1].lastName);
                swap(players[j].team.city, players[j + 1].team.city);
                swap(players[j].team.name, players[j + 1].team.name);

                // swaps salary of player j and j+1
                lTemp = players[j].salary;
                players[j].salary = players[j + 1].salary;
                players[j + 1].salary = lTemp;
            }
        }
    }
}

void sortlastName(Player *players, int size) // modified sortFirstName function, just does last names
{
    int i, j;
    long lTemp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (strcmp(players[j].lastName, players[j + 1].lastName) > 0)
            {
                swap(players[j].firstName, players[j + 1].firstName);
                swap(players[j].lastName, players[j + 1].lastName);
                swap(players[j].team.city, players[j + 1].team.city);
                swap(players[j].team.name, players[j + 1].team.name);

                lTemp = players[j].salary;
                players[j].salary = players[j + 1].salary;
                players[j + 1].salary = lTemp;
            }
        }
    }
}

void sortSalary(Player *players, int size) // modified sortFirstName function, just does salary
{
    int i, j;
    long lTemp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {

            if (players[j].salary > players[j + 1].salary)
            {
                swap(players[j].firstName, players[j + 1].firstName);
                swap(players[j].lastName, players[j + 1].lastName);
                swap(players[j].team.city, players[j + 1].team.city);
                swap(players[j].team.name, players[j + 1].team.name);

                lTemp = players[j].salary;
                players[j].salary = players[j + 1].salary;
                players[j + 1].salary = lTemp;
            }
        }
    }
}

void printArray(Player *players, int size) // function to print struct. I know its called print array i just called it that in the prelab for some reason and am too lazy to change it
{
    char a[] = "First Name";
    char b[] = "Last Name";
    char c[] = "Salary";
    char d[] = "Team";
    printf("\n%-35s %-15s %-30s %s ", a, b, c, d); // prints headers, uses right justification
    for (int i = 0; i < size; i++)
    {
        printf("\n%-35s %-15s $%-30ld%s %s", players[i].firstName, players[i].lastName, players[i].salary, players[i].team.city, players[i].team.name); // prints each member of the struct, right justified to each header
    }
}