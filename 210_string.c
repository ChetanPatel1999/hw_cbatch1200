// wap to take a string and print reverse string.
#include <stdio.h>
void main()
{
    char s[50], i, l;
    printf("enter string : ");
    gets(s); // ram
    for (l = 0; s[l] != '\0'; l++)
    {
    }
    printf("reverse string : ");
    for (i = l - 1; i >= 0; i--) // 0
    {
        printf("%c", s[i]); // mar
    }
    printf("\nstring : %s",s);
}