// club mini project
#include <stdio.h>
void main()
{
    int age, num;
    printf("enter your age : ");
    scanf("%d", &age); // 18
    if (age >= 18)
    {
        printf("welcome to my club..\n");
        printf("club menue ...\n");
        printf("             item       price\n");
        printf("press 1 for noodles   : 80 \n");
        printf("press 2 for sandwitch : 120 \n");
        printf("press 3 for burger    : 50\n");
        printf("press number : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("your noodles is orderd please pay 80 rs\n");
            break;
        case 2:
            printf("select sandwitch type ...\n");
            printf("press 1 for mayo masala cheez\n");
            printf("press 2 for vegitable sandwitch\n");
            printf("press 3 for paneer masala cheez\n");
            printf("select any one : ");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("your mayo masala cheez sandwitch is ready please take it ");
                break;
            case 2:
                printf("your vegitable sandwitch is ready please take it ");
                break;
            case 3:
                printf("your paneer masala cheez sandwitch is ready please take it ");
                break;
            default:
                printf("please press 1 to 3");
            }

            break;
        case 3:
            printf("your burger is orderd please pay 50 rs\n");
            break;
        default:
            printf("please enter 1 to 3");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}