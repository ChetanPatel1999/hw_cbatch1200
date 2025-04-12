// goto stmnt working.
#include <stdio.h>
void main()
{
    int i;
    i = 1;
    printf("hello wolrd institute\n");
    i++;
    if (i <= 5)
    {
        goto lab;
    }
    printf("some code before lable \n");
lab:
    printf("after lable ");
}