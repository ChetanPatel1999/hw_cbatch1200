//wap to print individual number of given number.
#include <stdio.h>
void main()
{
    int num, rem;
    printf("enter a num : ");
    scanf("%d", &num);//345
    while (num > 0)
    {
        rem = num % 10;
        printf("%d\n", rem);
        num = num / 10;
    }
}