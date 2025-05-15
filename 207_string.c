// strcmpi() :- its compare two string if string are same return 0 otherwise 1
// strcmpi() : ignorlower case upper case latter
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    printf("enter s1 string : ");
    gets(s1); // hello
    printf("enter s2 string : ");
    gets(s2); // hello
    if (strcmpi(s1, s2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}