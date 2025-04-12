// wap to print number 1 to 10.
#include <stdio.h>
void main()
{
    int i = 1;
lab:
    printf("%d\n",i);
    i++;
    if (i <= 10)
    {
        goto lab;
    }
}