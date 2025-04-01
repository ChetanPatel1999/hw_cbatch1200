// example of nested if else
// wap to check given number is positive-even , positive odd
//  nagative-even or nagative-odd.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // -56
    if (num < 0)
    {
        if (num % 2 == 0)
        {
            printf("nagative-even");
        }
        else
        {
            printf("nagative-odd");
        }
    }
    else
    {
        if (num % 2 == 0)
        {
            printf("positive-even");
        }
        else
        {
            printf("positive- odd");
        }
    }
}