#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 3
    {
        for (j = 1; j <= 5; j++) // 5
        {
            printf("%d ",i); // 20
        }
        printf("\n");
    }
}