// wap to print only even values from dynamic array using pointer.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    int *ptr, *temp, n;
    printf("enter array size : ");
    scanf("%d", &n);                      // 5
    ptr = (int *)malloc(n * sizeof(int)); // 400
    temp = ptr;
    printf("enter array element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = temp;
    printf("display array element : \n");
    for (i = 0; i < n; i++) // 5
    {
        printf("%d  ", *ptr);
        ptr++; // 420
    }
    ptr = temp;
    printf("\neven element of array :\n"); // arr
    for (i = 0; i < n; i++)                // 1
    {
        if (*ptr % 2 == 0)
        {
            printf("%d  ", *ptr);
        }
        ptr++;
    }
    ptr = temp;
    free(ptr); // free dynamic memory
    printf("\ndisplay array element : \n");
    for (i = 0; i < n; i++) // 5
    {
        printf("%d  ", *ptr);
        ptr++; // 420
    }
}