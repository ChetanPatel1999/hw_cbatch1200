// wap to convert string in upper case.
//  hi How are you. ---> HI HOW ARE YOU
#include <stdio.h>
int length(char s[])
{
    int i, c = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void main()
{
    char s[50];
    printf("enter sentance : ");
    gets(s);
    printf("string  : %s\n", s);
    printf("string length  : %d\n", length(s));
}
