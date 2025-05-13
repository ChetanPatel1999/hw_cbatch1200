// realloc function
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i;
    printf("enter array size : ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int)), *temp;
    temp = ptr;
    printf("address of dynamic array :  ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    int n1, *ptr1;
    printf("\nincrease array size :");
    scanf("%d", &n1); // 8
    ptr1 = realloc(ptr, n1 * sizeof(int));
    temp = ptr1;
    printf("address of new dynamic array :  ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr1);
        ptr1++;
    }
    ptr1 = temp;
    free(ptr1);
}