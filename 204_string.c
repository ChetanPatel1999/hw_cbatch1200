// strcpy() :- its copy one string into another variable
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    printf("enter a string : ");
    gets(s1);
    printf("string s1 : %s\n", s1);
    printf("string s2 : %s\n", s2);
    // strcpy(s2,s1);
    strcpy(s2, "gaurav");
    printf("string s1 : %s\n", s1);
    printf("string s2 : %s\n", s2);
}