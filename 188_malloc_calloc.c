#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1 = malloc(20);
    int *ptr2 = calloc(5, 4);
    int i;
    printf("malloc array element : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\ncalloc array element : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
}