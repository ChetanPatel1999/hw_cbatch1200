// wap to take matrix element from user and find sum of all element and also find average.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row in matrix : ");
    scanf("%d", &r);
    printf("enter column in matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter element pos mat[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("matrix element are : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat[i][j]); // 12 34 56 11 22 33 55 66 77
        }
        printf("\n");
    }
    // sum of all element of matrix
    int sum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + mat[i][j];
        }
    }
    printf("sum of all element : %d\n", sum);
    float ave;
    ave = sum / (float)(r * c);
    printf("avrage of matrix : %.2f", ave);
}