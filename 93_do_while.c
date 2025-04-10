// make a continue calculator
#include <stdio.h>
void main()
{
    int p;
    int num, a, b, c;
    printf("welcome to my calculater...\n");
    do
    {
        printf("press 1 for add \n");
        printf("press 2 for sub \n");
        printf("press 3 for mul \n");
        printf("press 4 for div \n");
        printf("press num : ");
        scanf("%d", &num); // 3
        switch (num)
        {
        case 1:
            printf("you choosed addition programm ...\n");
            printf("enter frist num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a + b;
            printf("sum = %d\n", c);
            break;
        case 2:
            printf("you choosed subtraction programm ...\n");
            printf("enter frist num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a - b;
            printf("sub = %d\n", c);
            break;
        case 3:
            printf("you choosed multiplication programm ...\n");
            printf("enter frist num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a * b;
            printf("mul = %d\n", c);
            break;
        case 4:
            printf("you choosed division  programm ...\n");
            printf("enter frist num : ");
            scanf("%d", &a);
            printf("enter second num : ");
            scanf("%d", &b);
            c = a / b;
            printf("div = %d\n", c);
            break;
        default:
            printf("please enter 1 to 4");
        }
        printf("if you want to continue press 1 : ");
        scanf("%d", &p);
    } while (p == 1);
    printf("thanks for using our calculator %c", 3);
}