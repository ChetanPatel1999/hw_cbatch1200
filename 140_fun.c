// function in c language
#include <stdio.h>
void add()
{
    int a, b, c;
    printf("addition programm..\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void sub()
{
    int a, b, c;
    printf("subtraction programm..\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("sub = %d\n", c);
}
void main()
{
    int i;
    for (i = 1; i <= 3; i++) // 2
    {
        add();
        printf("inside for loop \n");
    }
    sub();
}
