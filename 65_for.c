// wap to print all even number sum 1 to n.
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // 4
    {
        if (i % 2 == 0)
        {
            sum = sum + i; // 55
        }
    }
    printf("even number sum 1 to %d = %d", n, sum);
}