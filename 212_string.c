// wap to check given two string are same or not.
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
int compare(char s1[], char s2[])
{
    if (length(s1) == length(s2))
    {
        int i;
        for (i = 0; i < length(s1); i++)
        {
            if (s1[i] != s2[i])
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
void lower(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
}
void main()
{
    char s1[50], s2[50];
    printf("enter string1 : ");
    gets(s1); // ram
    printf("enter string2 : ");
    gets(s2); // ram
    lower(s1);
    lower(s2);
    if (compare(s1, s2))
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}