// wap to check he/she is eligible for marrid or not.
#include <stdio.h>
void main()
{
    char marrid_status, gender;
    int age;
    printf("enter 'm' for merride otherwise 's' :  ");
    scanf("%c", &marrid_status);
    if (marrid_status == 's')
    {
        printf("enter your gender : ");
        scanf(" %c", &gender);
        if (gender == 'f')
        {
            printf("enter your age : ");
            scanf("%d", &age);
            if (age >= 18)
            {
                printf("she is eligible for marride");
            }
            else
            {
                printf("she is not eligible for marride");
            }
        }
        else if (gender == 'm')
        {
            printf("enter your age : ");
            scanf("%d", &age);
            if (age >= 21)
            {
                printf("he is eligible for marride");
            }
            else
            {
                printf("he is not eligible for marride");
            }
        }
        else
        {
            printf("please enter 'f' or 'm' ");
        }
    }
    else if (marrid_status == 'm')
    {
        printf("you allreddy marride");
    }
    else
    {
        printf("please enter 'm' or 's' ");
    }
}