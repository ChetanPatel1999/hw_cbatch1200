#include <stdio.h>
void copy(char s2[], char s1[])
{
    int i;
    // hello
    for (i = 0; s1[i] != '\0'; i++) // 5
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
}
void main()
{
    char s1[50], s2[50];
    printf("enter string1 : ");
    gets(s1);
    copy(s2, "ram");
    printf("string s1 : %s\n", s1);
    printf("string s2 : %s\n", s2);
}