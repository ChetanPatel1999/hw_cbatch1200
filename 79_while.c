// wap to print number between given range.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a starting range : ");
    scanf("%d", &i); // 5
    printf("enter a ending range : ");
    scanf("%d", &n); // 25
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}