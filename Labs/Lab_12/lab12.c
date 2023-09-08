// Don't forget to add your header

// Includes - do you need others?
#include <stdio.h>
#include <string.h>
#include "fight.h"

#define FILENAME "monster.csv"

// Main
int main(int argc, char *argv[])
{

    FILE *fp;
    // Uncomment the following line if you want random (different every time) fights
    // SetSeed(0);

    fp = fopen(FILENAME, "r");

    char name[256];
    char nameChoice1[256] = "Ahote";
    char nameChoice2[256] = "Frost Giant";
    int ac, hp, hitbonus;
    char attack1dmg[256];
    char attack2dmg[256];
    int count;

    Combatant One;
    Combatant Two;

    // Uncomment the following 3 lines if you want to try a sample fight
    // Combatant JimR = {"JimR", 21, 900, 10, "5d6+5", "5d12+5"};
    // Combatant Lar = {"Dr. Lawrence D. Ries", 5, 100, 5, "1d6", "N/A"};
    // Fight(JimR,Lar);

    if (NULL != fp)
    {

        fgets(name, 255, fp);
        name[255] = '\0';
        printf("Header line was: %s\n", name); // gets header file and throws it away, thanks JimR for the code

        for (count = 1; count < 27; count++)
        {
            if (6 == fscanf(fp, "%[^,], %d, %d, %d, %[^,],%s", name, &ac, &hp, &hitbonus, attack1dmg, attack2dmg))
            {
                printf("\nName is : %s", name);
                printf("\nChosen Name 1 is : %s", nameChoice1);

                strcpy(One.name, name);
                One.ac = ac;
                One.hp = hp;
                One.hitbonus = hitbonus;
                One.attack1damage[255] = attack1dmg[255];
                One.attack2damage[255] = attack2dmg[255];

                printf("\nstrcmp: %d\n", strcmp(nameChoice1, name));

                strcpy(Two.name, name);
                Two.ac = ac;
                Two.hp = hp;
                Two.hitbonus = hitbonus;
                Two.attack1damage[255] = attack1dmg[255];
                Two.attack2damage[255] = attack2dmg[255];
            }
        }
        // Fight(One, Two);
    }

    printf("Name: %s", One.name);

    // If you are going to use fscanf() to read data from the file, this format string might be helpful:
    //" %[^,], %d, %d, %d, %[^,], %s"

    fclose(fp);
}
