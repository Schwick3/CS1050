#include <stdio.h>

int main(void)
{
    // declaring variables
    int x;
    int smallx;
    int xremainder;

    // for statement to stop when x reaches 99
    for (x = 1; x <= 99; x++)
    {

        smallx = x / 10; // variable used in following switch statement

        switch (smallx) // switch statement to to determine if x is in the twentys, thirties etc.
        {
        case 0:
            xremainder = x % 10;
            break; // stops the switch to move on to the next part of the for lopp
        case 1:
            xremainder = x * 10; // special case that milultplies the number so that it can do the teens later
            break;
        case 2:
            printf(" Twenty");
            xremainder = x % 20;
            break;
        case 3:
            printf(" Thirty");
            xremainder = x % 30;
            break;
        case 4:
            printf(" Forty");
            xremainder = x % 40;
            break;
        case 5:
            printf(" Fifty");
            xremainder = x % 50;
            break;
        case 6:
            printf(" Sixty");
            xremainder = x % 60;
            break;
        case 7:
            printf(" Seventy");
            xremainder = x % 70;
            break;
        case 8:
            printf(" Eighty");
            xremainder = x % 80;
            break;
        case 9:
            printf(" Ninety");
            xremainder = x % 90;
            break;
        }

        switch (xremainder) // prints the second part of the numbers >10 and just the number for <10
        {
        case 0:
            printf("");
            break; // stops the switch to end the for loop
        case 1:
            printf(" One,");
            break;
        case 2:
            printf(" Two,");
            break;
        case 3:
            printf(" Three,");
            break;
        case 4:
            printf(" Four,");
            break;
        case 5:
            printf(" Five,");
            break;
        case 6:
            printf(" Six,");
            break;
        case 7:
            printf(" Seven,");
            break;
        case 8:
            printf(" Eight,");
            break;
        case 9:
            printf(" Nine,");
            break;
        // now for the teens
        case 100:
            printf(" Ten,");
            break;
        case 110:
            printf(" Eleven,");
            break;
        case 120:
            printf(" Twelve,");
            break;
        case 130:
            printf(" Thirteen,");
            break;
        case 140:
            printf(" Fourteen,");
            break;
        case 150:
            printf(" Fifteen,");
            break;
        case 160:
            printf(" Sixteen,");
            break;
        case 170:
            printf(" Seventeen,");
            break;
        case 180:
            printf(" Eighteen,");
            break;
        case 190:
            printf(" Nineteen,");
            break;
        }
    }

    return 0;
}