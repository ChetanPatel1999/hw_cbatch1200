// array in c language
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90}, i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d \n", arr[i]);
    }
    //array value change
    arr[2] = 700;
    printf("array element after change are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d \n", arr[i]);
    }
}