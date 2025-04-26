//wap to print 1 to 10 numbers using recursion.
#include <stdio.h>
void num1_to_10()
{
    static int i = 1;
    printf("%d \n",i);
    i++; //3
    if (i <= 10)
    {
        num1_to_10();
    }
}
void main()
{
    num1_to_10();
}