#include <stdio.h>
void display(int arr[], int s)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int s)
{
    int i;
    printf("reverse array element are : ");
    for (i = s - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr1[5] = {12, 34, 56, 78, 90};
    display(arr1, 5);
    reverse(arr1, 5);
}