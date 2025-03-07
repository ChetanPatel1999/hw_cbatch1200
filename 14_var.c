//variable defining rule
#include<stdio.h>
int gl=45;//global variable
void fun1()
{
	 int b = 90;//local variable
     printf ("b = %d\n",b);
	 printf("gl = %d\n",gl);	
}
void main()
{
   int a=12;// local variable
   printf("a = %d\n",a);
   printf("gl = %d\n",gl);
   fun1();
}

