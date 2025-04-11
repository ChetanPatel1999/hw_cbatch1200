// wap to check 5 in given number or not.
#include <stdio.h>
void main()
{
    int num, rem, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 54645
    while (num > 0)
    {
        rem = num % 10;
        if (rem == 5)
        {
            c = 1;
            break;
        }
        num = num / 10;
    }
    if (c == 0)
    {
        printf("5 is not found ");
    }
    else
    {
        printf("5 is found", c);
    }
}