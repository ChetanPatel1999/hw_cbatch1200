// array element store at contigius memory location.
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d \n",&arr[i]);
    }
}