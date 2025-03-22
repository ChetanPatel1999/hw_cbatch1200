// wap to check voter is elegible for casting vote or not.
#include <stdio.h>
void main()
{
    int age;
    printf("enter youre age :");
    scanf("%d", &age); // 12
    if (age >= 18)
    {
        printf("your are eligible for casting vote");
    }
    else
    {
        printf("your are not eligible for casting vote");
    }
}