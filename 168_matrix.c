// matric in c langauge
#include <stdio.h>
void main()
{
    int mat[3][3] = {{12, 34, 56}, {11, 22, 33}, {55, 66, 77}};
    int i, j;
    printf("matrix element are :\n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]); // 12 34 56 11 22 33 55 66 77
        }
        printf("\n");
    }
}