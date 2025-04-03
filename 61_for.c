// wap to print square 1 to n .
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 10
    printf("sqaure  1 to %d : \n", n);
    for (i = 1; i <= n; i++) // 3
    {
        printf("sqaure of %d = %d\n", i, i * i);
    }
}