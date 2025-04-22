#include <stdio.h>
void fun1()
{
    printf("hi i am fun1 \n");
}
void fun2()
{
    printf("hi i am fun2 \n");
    fun1();
    printf("end fun2 \n");
}
void fun3()
{
    printf("hi i am fun3 \n");
    fun2();
    printf("end fun3 \n");
}
void main()
{
    printf("hi i am main \n");
    fun3();
    fun1();
    printf("end main fun");
}