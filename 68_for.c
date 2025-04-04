// wap to print factorial of given number.
#include <stdio.h>
void main()
{
    int num, fact = 1, i;
    printf("enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", num, fact);
}