// wap to check given string is plindrom or not.
// naman , malayalam, madam
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    printf("enter s1 string : ");
    gets(s1);
    strcpy(s2, s1); // copy string in s2
    strrev(s1);     // reverse string of s1
    if (strcmp(s1, s2) == 0)
    {
        printf("string is plindrom");
    }
    else
    {
        printf("string is not plindrom");
    }
}