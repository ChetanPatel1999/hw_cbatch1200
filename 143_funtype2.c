// no return type, but with parameter
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum = %d\n", c);
}
void add2(float a, float b)
{
    float c;
    c = a + b;
    printf("sum = %.1f\n", c);
}
void cube(int n)
{
    int c;
    c = n * n * n;
    printf("cube of %d = %d\n", n, c);
}
void cube_range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 2
    {
        cube(i);
    }
    printf("----------------------------\n");
}
void table(int n)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    printf("----------------------------\n");
}
void range_table(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 2
    {
        table(i);
    }
    printf("----------------------------\n");
}
void factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", n, fact);
}
void add3(int a, int b, int c)
{
    int sum;
    sum = a + b + c;
    printf("sum = %d", sum);
}
void upper_case(char ch)//b
{
    char up;
    up = ch - 32; //98-32 = 66
    printf("upper case : %c", up);
}
void main()
{
    // int x=2,y=20;
    // add(x,y);
    // add(5, 7);
    // add2(3.4,8.2);
    // cube_range(1, 10);
    // cube_range(15,20);
    // table(3);
    // range_table(5, 8);
    // factorial(4);
    // add3(23, 45, 66);
    upper_case('q');
    upper_case('n');
}