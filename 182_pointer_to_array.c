// pointer to array
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    int *ptr = &arr[0]; // 400
    printf("display array element : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d \n", *ptr);
        ptr++; // 420
    }

    int sum = 0;
    ptr = arr;          // arr
    for (i = 0; i < 5; i++) // 1
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("sum of all element : %d", sum);
}