#include <stdio.h>
void main()
{
    int *ptr1;
    char *ptr2;
    double *ptr3;
    printf("int ptr size in byte : %d \n", sizeof(ptr1));
    printf("char ptr size in byte : %d \n", sizeof(ptr2));
    printf("double ptr size in byte : %d \n", sizeof(ptr3));
}