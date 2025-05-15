// wap to count word in given sentance.
//  hi how are you.
#include <stdio.h>
void main()
{
    char s[50];
    printf("enter sentance : ");
    gets(s);
    int sp = 0, i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            sp++;
        }
    }
    printf("total world : %d", sp + 1);
}