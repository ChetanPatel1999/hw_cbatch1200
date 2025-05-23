// fgetc():- its read single char from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("227_file.c", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}