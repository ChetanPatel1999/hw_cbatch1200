// fputs() :- its used to write data into file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[30]="hello chetan";
    ptr = fopen("facto.txt", "a");
    fputs(ch,ptr);
    fclose(ptr);
}