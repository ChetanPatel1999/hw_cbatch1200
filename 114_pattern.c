#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 6
    {
        for (j = i; j <= 5; j++) // 5
        {
            printf("* "); // 20
        }
        printf("\n");
    }
}