// how to take array element from user.
#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}