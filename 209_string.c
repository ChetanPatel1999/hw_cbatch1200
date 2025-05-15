// wap to check given string is plindrom or not without using built in function.
// naman , malayalam, madam
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50];
    printf("enter s1 string : ");
    gets(s1); // malayalam
    int i = 0, j = strlen(s1) - 1, f = 1;
    while (i < j)
    {
        if (s1[i] != s1[j])
        {
            f = 0;
            break;
        }
        i++; // 4
        j--; // 4
    }
    if (f == 1)
    {
        printf("string is plindrom");
    }
    else
    {
        printf("string is not plindrom");
    }
}