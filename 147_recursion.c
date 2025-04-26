//run infinite time
#include<stdio.h>
void fun()
{
    printf("hello world institute\n");
    fun();//recursive calling
}
void main()
{
  fun();
}