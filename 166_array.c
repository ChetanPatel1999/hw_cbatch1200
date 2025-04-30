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
int even_count(int arr[], int s)
{
    int i, c = 0;
    for (i = 0; i < s; i++)
    {
        if (arr[i] % 2 == 0)
        {
            c++;
        }
    }
    return c;
}
void main()
{
    int arr1[5] = {12, 34, 5, 78, 9};
    display(arr1, 5);
    printf("even value count :  %d ", even_count(arr1, 5));
}