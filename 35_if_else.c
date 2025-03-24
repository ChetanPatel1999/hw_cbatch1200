// wap to check given number is greater than 1000 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num); // 1200
    if (num > 1000)
    {
        printf("number is greater than 1000");
    }
    else
    {
        printf("number is less than 1000");
    }
}