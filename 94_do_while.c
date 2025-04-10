#include <stdio.h>
void main()
{
    int total_amount = 20000, amount, sum = 0, p;
    printf("\n    sallary distribute app : \n");
    printf("________________________________ \n\n");
    printf("you have total amount : %d rs\n", total_amount);
    do
    {
        printf("enter amount to given emp : ");
        scanf("%d", &amount);
        sum = sum + amount;
        if (sum > total_amount)
        {
            printf("\ninsufficiant belance ! \n");
            sum = sum - amount;
            printf("you have only %d rs ! \n\n", total_amount - sum);
        }
        else
        {
            printf("\n %d amount succefully paid\n\n",amount);
        }
        printf("press 1 for more emp : ");
        scanf("%d", &p);
    } while (p == 1);
    printf("____________________________________\n\n");
    printf("  you distribute total amount : %d rs\n", sum);
    printf("  you have remaining  amount : %d rs\n", total_amount - sum);
}