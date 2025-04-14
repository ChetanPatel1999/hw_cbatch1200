#include <stdio.h>
void main()
{
    int i, n, tab;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n); // 5
    tab = n;
    while (i <= 10)
    {
        printf("%d \n", tab); //
        tab += n;
        i++;
    }
}