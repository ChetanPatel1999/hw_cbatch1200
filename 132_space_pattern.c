#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++) // 1
    {
        for (s = 5; s > i; s--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
    for (i = 1; i <= 5; i++) // 1
    {
        for (s = 5; s > i; s--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}