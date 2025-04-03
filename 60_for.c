// wap to print number 1 to n.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);//70
    printf("number 1 to %d : ", n);
    for (i = 1; i <= n; i++) // 0
    {
        printf("%d ", i);
    }
}