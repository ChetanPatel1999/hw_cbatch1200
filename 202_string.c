// strupr()
//strlwr()
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    printf("enter a string : ");
    gets(s);
    printf("string : %s\n", s);
    strupr(s);
    printf("string uppercase : %s\n",s);
    strlwr(s);
    printf("string lowercase : %s\n",s);
}