#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //
    switch(num>0)
    {
        case 0 : printf("nagative");break;
        case 1 : printf("num is positive");break;
    }
}