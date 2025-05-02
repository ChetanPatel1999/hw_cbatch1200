// matric in c langauge
#include <stdio.h>
void main()
{
    int mat[3][3] = {{12, 34, 56}, {11, 22, 33}, {55, 66, 77}};
    printf("%d\n",mat[0][0]);
    printf("%d\n",mat[0][1]);
    printf("%d\n",mat[0][2]);
    printf("%d\n",mat[1][0]);
    printf("%d\n",mat[1][1]);
    mat[1][1]=900;
    printf("%d\n",mat[1][1]);

}