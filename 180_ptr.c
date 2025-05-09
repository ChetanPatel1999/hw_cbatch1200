// pointer in c langauge
// we increase pointer adresss by 1 so its increase by 4 if 
// pointer type is integer.
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
    ptr++;
    printf("address of a : %d\n", &a);         // 4567
    printf("address of a by ptr : %d\n", ptr); // 4571
  //printf("value of a by *ptr : %d\n", *ptr); // 12
}