#include <stdio.h>
int i = 1; //global variable
void fun()
{
    printf("hello world institute\n");
    i++;//6
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}