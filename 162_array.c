// wap to find max number in given array.
#include <stdio.h>
void main()
{
    int arr[10] = {400, 566, 78, 2, 4,787,44,34,6767,9};
    int i, max = arr[0];    // 4
    for (i = 0; i < 10; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("max element : %d ", max);
}