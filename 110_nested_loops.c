#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//6
    {
        printf("outside for loop---------\n");
        for (j = 1; j <= 4; j++)//5
        {
            printf("hello student\n");//20
        }
        printf("-------------------------\n");
    }

}