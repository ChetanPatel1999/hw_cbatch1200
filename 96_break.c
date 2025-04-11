// break example
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 4
    {
        if (i == 5)
        {
            break;
        }
        printf("%d \n", i);
    }
    printf("\nafter for loop");
}