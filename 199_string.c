// wap to convert string in upper case.
//  hi How are you. ---> HI HOW ARE YOU
#include <stdio.h>
void upper(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}
void main()
{
    char s[50];
    printf("enter sentance : ");
    gets(s);
    printf("string  : %s\n", s);
    upper(s);
    printf("string  : %s\n", s);
}
