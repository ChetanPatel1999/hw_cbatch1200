#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d \n", i * n); //
        i++;
    }
}