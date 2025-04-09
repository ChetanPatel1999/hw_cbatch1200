// wap to print reverese number of given number.
#include <stdio.h>
void main()
{
    int num, rem, rev = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 367
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem; // 763
        num = num / 10;
    }
    printf("reverse number  : %d ", rev); // 19
}