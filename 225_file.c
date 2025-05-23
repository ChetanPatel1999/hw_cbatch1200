// how to read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    int stop;
    char ch[50];
    ptr = fopen("facto.txt", "r");
    while (1)
    {
        stop = fscanf(ptr, "%s", ch);
        if (stop == EOF)
        {
            break;
        }
        printf("%s ", ch);
    }
    fclose(ptr);
}