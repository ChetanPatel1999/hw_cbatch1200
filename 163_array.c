// how to pass array in function
// wap to find max number in given array.
#include <stdio.h>
void display(int arr[], int size)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int find_max(int arr[], int size)
{
    int max, i;
    max = arr[0];              // 4
    for (i = 0; i < size; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void main()
{
    int arr1[10] = {400, 566, 78, 2, 4, 787, 44, 34, 6767, 9};
    int arr2[7] = {400, 56, 787, 44, 34, 67, 9};
    int arr3[4] = {45, 67, 89, 23};
    int i, max;
    display(arr1, 10);
    printf("\nmax element : %d\n", find_max(arr1, 10));
    display(arr2, 7);
    printf("\nmax element : %d\n", find_max(arr2, 7));
    display(arr3, 4);
    printf("\nmax element : %d\n", find_max(arr3, 4));
}