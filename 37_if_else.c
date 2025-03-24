// wap to print smallest num between given two number.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter frist num : ");
    scanf("%d", &num1); // 788
    printf("enter second num : ");
    scanf("%d", &num2); // 99
    if (num1 < num2)
    {
        printf("smallest num : %d", num1);
    }
    else
    {
        printf("smallest num : %d", num2);
    }
}