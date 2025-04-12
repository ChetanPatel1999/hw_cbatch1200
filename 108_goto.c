// wap to print even number 1 to n.
#include <stdio.h>
void main()
{
    int i = 1,n;
    printf("enter a num: ");
    scanf("%d",&n);
    printf("even number series : ");
lab:
    if (i % 2 == 0)
    {
        printf("%d ", i);
    }
    i++;
    if (i <= n)
    {
        goto lab;
    }
}