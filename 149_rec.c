#include <stdio.h>
void fun()
{
    static int i = 1;// its run only once time in program
    printf("hello world institute\n");
    i++; //3
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}