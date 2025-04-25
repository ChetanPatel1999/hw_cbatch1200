// with return type with parameter
#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}
int cube(int n)
{
    return (n * n * n);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)
    {
        printf("cube of %d = %d\n", i, cube(i));
    }
}
float avrage(int a, int b)
{
    return ((a + b) / 2.0);
}
int fact(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int great(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
char upper_case(char ch) // b
{
    char up;
    up = ch - 32; // 98-32 = 66
    return up;
}
void main()
{
    // range(1,5);
    // printf("avrage = %.2f\n",avrage(10,11));
    // int ans = fact(5);
    // printf("factorial of 5 = %d\n", ans);
    // printf("factorial of 4 = %d\n", fact(4));
    // printf("greatest num : %d\n", great(45, 67));
    // printf("greatest num : %d\n", great(455, 67));
    printf("upper case : %c", upper_case('l'));
}