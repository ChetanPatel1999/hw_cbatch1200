// pointer to array
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

    int sum = 0;
    ptr = arr;              // arr
    for (i = 0; i < 5; i++) // 1
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of all element : %d", sum);
}