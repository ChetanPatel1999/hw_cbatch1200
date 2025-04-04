// wap to print lower alphabet a to z.
#include <stdio.h>
void main()
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++) //
    {
        printf("%c ", ch);
    }
    printf("\n");
    for (ch = 97; ch <= 122; ch++) //
    {
        printf("%c ", ch);
    }
}