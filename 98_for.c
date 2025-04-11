// wap to search given number is in given table or not.
#include <stdio.h>
void main()
{
    int num, tab, i, s, search = 0;
    printf("enter a number for table: ");
    scanf("%d", &num); // 7
    printf("enter a number for search : ");
    scanf("%d", &s); // 7
    for (i = 1; i <= 10; i++)
    {
        tab = num * i;
        if (tab == s)
        {
            search = 1;
            break;
        }
    }
    if (search == 1)
    {
        printf("num is found");
    }
    else
    {
        printf("num is not found");
    }
}