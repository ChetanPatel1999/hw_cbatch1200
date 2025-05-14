//visit string character using \0 character
#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    printf("name : %s\n", name);

    int i;
    for (i = 0; name[i] != '\0'; i++)//6
    {
        printf("%c ", name[i]);
    }
}