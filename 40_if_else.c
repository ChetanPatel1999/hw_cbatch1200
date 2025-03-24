// wap to check given number is divisible by 4 or not
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    if (num % 4 == 0)
    {
        printf("divisible by 4");
    }
    else
    {
        printf("not divisible by 4");
    }
}