// wap to find greatest num between three numbers.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter frist num : ");
    scanf("%d", &num1); // 344
    printf("enter second num : ");
    scanf("%d", &num2); // 55
    printf("enter third num : ");
    scanf("%d", &num3); // 89
    if (num1 > num2 && num1 > num3)
    {
        printf("greatest num : %d", num1);
    }
    else if (num2 > num3)
    {
        printf("greatest num : %d", num2);
    }
    else
    {
        printf("greatest num : %d", num3);
    }
}