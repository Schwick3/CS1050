#include <stdio.h>

int main()
{
    int nums[21];
    int i;
    for (i = 0; i < 21; i++)
    {
        nums[i] = i;
    }

    for (i = 0; i < 21; i++)
    {
        printf("%d\n", nums[i]);
    }
}