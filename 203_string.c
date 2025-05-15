// strrev()
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    printf("enter a string : ");
    gets(s);
    printf("string : %s\n", s);
    strrev(s);
    printf("reverse string : %s\n",s);   
}