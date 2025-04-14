#include <stdio.h>
void main()
{
    int a = 12, b = 7;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a += 5;
    // a+=b;
    // a*=b;
    // a/=b;
    // a %= b;
    b *= b;                //
    printf("a = %d\n", a); // 12
    printf("b = %d\n", b); // 49
}