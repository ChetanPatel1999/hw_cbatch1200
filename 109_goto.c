// wap to print table of given number.
#include <stdio.h>
void main()
{
    int i = 1, n,tab;
    printf("enter a num: ");
    scanf("%d", &n);
lab:
    tab = n * i;
    printf("%d X %d = %d \n", n, i, tab);
    i++;
    if (i <= 10)
    {
        goto lab;
    }
}