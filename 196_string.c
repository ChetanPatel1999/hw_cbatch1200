// how take string from user
// gets() :- take string from user
// puts() :- display string on output screen
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter name : ");
    gets(name);
    // printf("name : %s", name);
    printf("name : ");
    puts(name);
}