// wap to print even number between given range.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a starting range : ");
    scanf("%d", &i); // 5
    printf("enter a ending range : ");
    scanf("%d", &n); // 25
    printf("even numbers are : ");
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);//6 8 10 12 
        }
        i++;//8
    }
}