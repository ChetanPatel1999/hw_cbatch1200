// wap to print your friend name according to frist character of name.
#include <stdio.h>
void main()
{
    char f_char;
    printf("enter a frist charcter : ");
    scanf("%c", &f_char);
    if (f_char == 'b')
    {
        printf("bhavesh");
    }
    else if (f_char == 'a')
    {
        printf("anvit");
    }
    else if (f_char == 'v')
    {
        printf("vivek");
    }
    else if (f_char == 'd')
    {
        printf("deepali");
    }
    else
    {
        printf("no one friend name which start with this later");
    }
}