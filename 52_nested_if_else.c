// wap to check voter is eligible to cast vote in india.
#include <stdio.h>
void main()
{
    char country;
    int age;
    printf("enter your country name frist latter: ");
    scanf("%c", &country);
    if (country == 'i')
    {
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("you are eligible for vote");
        }
        else
        {
            printf("you cant vote because your age is %d", age);
        }
    }
    else
    {
        printf("your not from india so you cant vote here");
    }
}