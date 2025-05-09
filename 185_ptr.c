// wap to print only even values from array using pointer.
#include <stdio.h>
void main()
{
    int arr[5];
    int i;
    int *ptr = &arr[0]; // 400
    printf("enter array element :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;
    printf("display array element : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", *ptr);
        ptr++; // 420
    }

    ptr = arr;
    printf("\neven element of array :\n"); // arr
    for (i = 0; i < 5; i++)                // 1
    {
        if (*ptr % 2 == 0)
        {
            printf("%d  ", *ptr);
        }
        ptr++;
    }
}