// wap to print only vovel from string.
#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    printf("name : %s\n", name);

    int i;
    printf("only vovel from string : ");
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c ", name[i]);
        }
    }
}