// wap to print a msg 5 times.
#include <stdio.h>
void main()
{
    int i = 1;
lab:
    printf("hello wolrd institute\n");
    i++;
    if (i <= 5)
    {
        goto lab;
    }
}