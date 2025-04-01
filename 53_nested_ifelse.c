// wap to find greatest num between three numbers without using logical and operator.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter frist num : ");
    scanf("%d", &num1); // 344
    printf("enter second num : ");
    scanf("%d", &num2); // 55
    printf("enter third num : ");
    scanf("%d", &num3); // 890
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("greatest num : %d", num1);
        }
        else
        {
            printf("greatest num : %d", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("greatest num : %d", num2);
        }
        else
        {
            printf("greatest num : %d", num3);
        }
    }
}