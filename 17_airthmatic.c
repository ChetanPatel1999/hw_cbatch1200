#include <stdio.h>
void main()
{
    int a, b, c;
    a = 12, b = 7;
    c = a + b;
    printf("addition = %d\n", c); // 19
    c = a - b;
    printf("subtraction = %d\n", c); // 5
    c = a * b;
    printf("multiplication = %d\n", c); // 84
    c = a / b;
    printf("division = %d\n", c); // 1
    c = a % b;
    printf("modules/reminder = %d\n", c); // 5
}