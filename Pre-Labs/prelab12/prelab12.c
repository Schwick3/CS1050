/*
 * CS1050
 * Fall 2022
 * Prelab 12 Starter Code
 * by Jim Ries
 */
#include <stdio.h>

// Symbolic Constants
#define FILENAME "DnDMonsterScores.csv"

// Main
int main(void)
{
    FILE *fp;
    char name[256];
    int count;
    float acAvg;

    fp = fopen(FILENAME, "r");
    if (NULL != fp)
    {
        // We are just going to "throw away" the header line (but print it out just to show we did it)
        fgets(name, 255, fp);
        name[255] = '\0'; // I like to null-terminate just to be sure
        printf("Header line was: %s\n", name);

        // Declaring a variable for every field in the csv file
        int ac, hp, str, dex, con, intel, wis, cha;
        float acFloat;

        // fscanf() gives us back the number of fields it read.  We asked for 9, so something went
        // wrong if we didn't get 9.  Notice also that the first field is "anything but a comma".
        // Notice also that I am re-using the name variable here.
        for (count = 0, acAvg = 0; count < 428; count++)
        {

            if (9 == fscanf(fp, " %[^,],%d,%d,%d,%d,%d,%d,%d,%d,", name, &ac, &hp, &str, &dex, &con, &intel, &wis, &cha))
            {
                printf("%d) \"%s\" : AC=%d,HP=%d\n", count + 1, name, ac, hp);
                acFloat = ac;
                acAvg += acFloat;
            }
        }
        acAvg /= count;
        printf("Total Monster Count: %d\n", count);
        printf("Average AC: %.2f\n", acAvg);
    }

    // Don't forget to close files that you open!
    fclose(fp);
}
