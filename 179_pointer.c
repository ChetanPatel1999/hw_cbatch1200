// we can change variable value by pointer
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a : %d\n", a);//12
    *ptr = 90;
    printf("value of a : %d\n", a);//90
    printf("value of a : %d\n", *ptr);//90
}