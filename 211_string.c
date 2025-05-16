// wap to take a string and reverse them in same varible.
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
void reverse(char s[])
{
    int i,temp;
    for (i = 0; i < (length(s) / 2); i++) // 3
    {
        temp = s[i]; // e
        s[i] = s[length(s) - i - 1];
        s[length(s) - i - 1] = temp;
    }
}
void main()
{
    char s[50];
    printf("enter string : ");
    gets(s); // ram
    // natehc
    printf("\nstring : %s", s);
    reverse(s);
    printf("\nreverse string : %s", s);
}