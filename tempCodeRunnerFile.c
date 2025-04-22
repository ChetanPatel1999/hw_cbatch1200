#include <stdio.h>
void main()
{
    int i,j,s;
    for (i = 1; i <= 6; i++) // 1
    {
        for (s = 6; s > i; s--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if(j==1 || j==i || i==6)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}