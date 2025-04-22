// function in c language
#include <stdio.h>
void add(); // function declaration
void main()
{
    printf("main fun start ...\n");
    add();
    printf("inside main ....\n");
    add();
    printf("end main fun ....\n");
}
void add() // function defination
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}