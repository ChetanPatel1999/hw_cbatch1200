// with return type with parameter
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res = add(12, 9);
    printf("res : %d\n", res);
    printf("add : %d\n",add(4,7));
    printf("add : %d\n",add(5,25));
}