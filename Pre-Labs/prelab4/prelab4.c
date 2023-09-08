#include <stdio.h>

int main(void)
{
    int x = 1;

    switch (x)
    {
    case 1:
        printf("One ");
        x++;
    case 2:
        printf("Two ");
        x++;
    case 3:
        printf("Three ");
        x++;
    case 4:
        printf("Four ");
        x++;
    case 5:
        printf("Five ");
        x++;
    case 6:
        printf("Six ");
        x++;
    case 7:
        printf("Seven ");
        x++;
    case 8:
        printf("Eight ");
        x++;
    case 9:
        printf("Nine ");
        x++;
    case 10:
        printf("Ten \n");
        break;
    }
    return 0;
}