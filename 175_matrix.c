// wap to takea matrix from user and display their left digonal.
#include <stdio.h>
void inputmat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter element pos mat[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}
void displaymat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void displayright_digonal(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 3
    {
        printf("%d ", mat[i][(r - 1) - i]);
    }
}
void displayright_digonal1(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i + j == (r - 1))
            {
                printf("%d ", mat[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int sum_right_digonal1(int r, int c, int mat[r][c])
{
    int i, j, sum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i + j == (r - 1))
            {
                sum = sum + mat[i][j];
            }
        }
    }
    return sum;
}
void main()
{
    int r, c;
    printf("enter row in matrix : ");
    scanf("%d", &r);
    printf("enter column in matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    printf("enter matrix element : \n");
    inputmat(r, c, mat);
    printf("display matrix : \n");
    displaymat(r, c, mat);
    if (r == c)
    {
        printf("display right digonal : \n");
        displayright_digonal1(r, c, mat);
        printf("sum of right digonal element :%d\n", sum_right_digonal1(r, c, mat));
    }
    else
    {
        printf("you matrix is not sqaure matrix");
    }
}