// pointer in c langauge
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("value of a : %d\n", a);            // 12
    printf("address of a : %d\n", &a);         // 4567
    printf("address of a by ptr : %d\n", ptr); // 4567
    printf("value of a by *ptr : %d\n", *ptr); // 12
}