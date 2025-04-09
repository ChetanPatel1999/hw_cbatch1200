// wap to print count digit of given number.
#include <stdio.h>
void main()
{
    int num, rem, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 6788
    while (num > 0)
    {
        c++;
        num = num / 10;
    }
    printf("digit count in number : %d\n", c); // 4
    if (c % 2 == 0)
    {
        printf("even digit count");
    }
    else
    {
        printf("odd digit count");
    }
}