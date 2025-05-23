// fputc() :- its used to write one char inside file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("gaurav.txt", "a");
    fputc('A', ptr);
    fclose(ptr);
}