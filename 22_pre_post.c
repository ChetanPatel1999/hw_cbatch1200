#include <stdio.h>
void main()
{
    int a = 12, b;
    printf("a = %d\n", a);
   // b = a++; // post increament :- first assign value in b after that increase value of a
     b = ++a; // pre increament :- first increase value of a then assign value in b that
    printf("a = %d\n", a);//13
    printf("b = %d\n", b);//12
}