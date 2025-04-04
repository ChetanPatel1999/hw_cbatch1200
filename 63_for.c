// wap to print even number series with n element.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}