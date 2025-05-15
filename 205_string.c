// strcat() :- its combine two string and assign in one variable
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    printf("enter s1 string : ");
    gets(s1); // hello
    printf("enter s2 string : ");
    gets(s2); // hy
    printf("string s1 : %s\n", s1);
    printf("string s2 : %s\n", s2);
    strcat(s1, " ");
    strcat(s1, s2);
    printf("string s1 : %s\n", s1);
    printf("string s2 : %s\n", s2);
}