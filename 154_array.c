//array in c language
#include<stdio.h>
void main()
{
 int arr[5]={12,34,56,78,90};
 printf("array element are : \n");
 printf("%d \n",arr[0]);
 printf("%d \n",arr[1]);
 printf("%d \n",arr[2]);
 printf("%d \n",arr[3]);
 printf("%d \n",arr[4]);
 arr[2]=700;
 printf("array element after change are : \n");
 printf("%d \n",arr[0]);
 printf("%d \n",arr[1]);
 printf("%d \n",arr[2]);
 printf("%d \n",arr[3]);
 printf("%d \n",arr[4]);
}