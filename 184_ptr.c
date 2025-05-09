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
    ptr--;//416
    printf("\ndisplay array element in reverse order : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d  ", *ptr);
        ptr--; // 412
    }

}