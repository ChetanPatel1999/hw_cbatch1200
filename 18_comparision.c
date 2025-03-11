#include <stdio.h>
void main()
{
    int a = 12, b = 6, c;
    c = a < b;
    printf("ans = %d\n", c);
    c = a > b;
    printf("ans = %d\n", c);
    c = a <= b;
    printf("ans = %d\n", c);
    c = a >= b;
    printf("ans = %d\n", c);
    c = a == b;
    printf("ans = %d\n", c);
    c = a != 12;
    printf("ans = %d\n", c);
}