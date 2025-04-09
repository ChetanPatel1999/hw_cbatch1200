// wap to check 5 in given number or not and also count 5.
#include <stdio.h>
void main()
{
    int num, rem, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 4645
    while (num > 0)
    {
        rem = num % 10;
        if (rem == 5)
        {
            c++;
        }
        num = num / 10;
    }
    if (c == 0)
    {
        printf("5 is not found ");
    }
    else
    {
        printf("5 is appear %d times in number", c);
    }
}