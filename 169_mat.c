// matric in c langauge
#include <stdio.h>
void main()
{
    int mat[3][2] = {{12, 34}, {11, 22}, {55, 66}};
    int i, j;
    printf("matrix element are :\n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 2; j++) // 3
        {
            printf("%d ", mat[i][j]); // 12 34 56 11 22 33 55 66 77
        }
        printf("\n");
    }
}