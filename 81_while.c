// wap to print odd number between given range.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a starting range : ");
    scanf("%d", &i); // 6
    printf("enter a ending range : ");
    scanf("%d", &n); // 25
    printf("odd numbers are : ");
    while (i <= n)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i); // 6
        }
        i++;
    }
}