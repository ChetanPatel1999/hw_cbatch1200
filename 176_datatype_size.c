#include<stdio.h>
void main()
{
   char a=65;
   int b;
   short int c;
   float d=5.67;
   double e=89.67;
   long long int f;
   printf("value of a : %d\n",a);
   printf("address of a : %d\n",&a);
   printf("size of char in byte : %d\n",sizeof(a));
   printf("size of int in byte : %d\n",sizeof(b));
   printf("size of short int in byte : %d\n",sizeof(c));
   printf("size of float in byte : %d\n",sizeof(d));
   printf("size of double in byte : %d\n",sizeof(e));
   printf("size of long long int in byte : %d\n",sizeof(f));
}