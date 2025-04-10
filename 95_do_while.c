#include <stdio.h>
void main()
{
    int n, i, p;
    do
    {
        printf("enter a num : ");
        scanf("%d", &n); // 5
        i = 1;
        while (i <= 10)
        {
            printf("%d x %d = %d\n", n, i, n * i);
            i++;
        }
        printf("you want to print more table press 1 : ");
        scanf("%d", &p);
    } while (p == 1);
}