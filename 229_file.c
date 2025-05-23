// fgets() :- its used to read one line from file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[30];
    ptr = fopen("facto.txt", "r");
    fgets(ch,30,ptr);
    printf("%s",ch);
    fclose(ptr);
}