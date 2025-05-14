// how take string from user
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter name : ");
    scanf("%[^\n]s", name); // take sentance from user
    printf("name : %s", name);
}