// how to read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50];
    ptr = fopen("facto.txt", "r");
    fscanf(ptr, "%s", ch);
    printf("%s ", ch);
    fscanf(ptr, "%s", ch);
    printf("%s ", ch);
    fclose(ptr);
}