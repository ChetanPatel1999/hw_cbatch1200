// how take string from user
// fgets() :- take string from user
// fputs() :- display string on output screen
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter name : ");
    fgets(name, 50, stdin);
    printf("name : ");
    fputs(name, stdout);
}