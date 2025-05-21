// write data inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char name[]="chetan patel";
    ptr = fopen("gaurav.txt", "w");
    fprintf(ptr, "hello world institute\n"); 
    fprintf(ptr, name); 
    fclose(ptr);
}