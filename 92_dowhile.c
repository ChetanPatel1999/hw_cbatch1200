// do while example
#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please purchesh bike ! \n");
        printf("if bike not purcheshed so press 1 : ");
        scanf("%d", &num);
    } while (num==1);
    printf("thanks papa for bike %c",3);
}