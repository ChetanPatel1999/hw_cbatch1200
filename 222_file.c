// write data inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char name[]="chetan patel\n";
    // appen mode insert new data inside file without delete privius data
    ptr = fopen("gaurav.txt", "a");
    fprintf(ptr, "hello world institute\n"); 
    fprintf(ptr, name); 
    fclose(ptr);
}