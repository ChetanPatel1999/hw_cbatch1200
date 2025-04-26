//wap to print 1 to 20 even numbers using recursion.
#include <stdio.h>
void num1_to_10()
{
    static int i = 1;
    if(i%2==0)
    {
        printf("%d  ",i);
    }
    i++; 
    if (i <= 20)
    {
        num1_to_10();
    }
}
void main()
{
    num1_to_10();
}