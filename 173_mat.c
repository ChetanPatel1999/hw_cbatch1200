// wap to take two matrix from user and display both sum.
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
void summatrix(int r, int c, int mat1[r][c], int mat2[r][c], int matsum[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void main()
{
    int r, c;
    printf("enter row in matrix : ");
    scanf("%d", &r);
    printf("enter column in matrix : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], matsum[r][c];
    printf("enter matrix1 element :\n");
    inputmat(r, c, mat1);
    printf("enter matrix2 element :\n");
    inputmat(r, c, mat2);
    printf("display matrix1 element :\n");
    displaymat(r, c, mat1);
    printf("display matrix2 element :\n");
    displaymat(r, c, mat2);
    // call for sum mat1 and mat2
    summatrix(r, c, mat1, mat2, matsum);
    printf("display sum matrix element :\n");
    displaymat(r, c, matsum);
}