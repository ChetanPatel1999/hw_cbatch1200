// no return type , no parameter
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
void cube()
{
    int n, c;
    printf("cube programm : \n");
    printf("enter a num : ");
    scanf("%d", &n);
    c = n * n * n;
    printf("cube = %d\n", c);
}
void table()
{
    int n, i;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
}
void factorial()
{
    int n, i,fact=1;
    printf("enter a num : ");
    scanf("%d", &n);//5
    for (i = 1; i <= n; i++)
    {
       fact=fact*i;
    } 
    printf("factorial of %d = %d\n",n,fact);
}
void main()
{
    // add();
    // cube();
    // table();
    factorial();
}