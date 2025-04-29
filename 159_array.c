// wap to take array element from user and display theire sum.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n); // 7
    int arr[n], i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // sum of all array element
    //  3 5 8 3 12
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i]; // 31
    }
    printf("\nsum of all element : %d", sum);
}