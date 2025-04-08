// wap to print pattern like :
// input : 10
// output: 10 5 2 1
// input : 50
// output: 25 12 6 3 1
#include <stdio.h>
void main()
{
    int i;
    printf("enter a num : ");
    scanf("%d", &i);
    while (i > 0)
    {
        printf("%d ", i); // 10 5 2 1
        i = i / 2;
    }
}