#include <stdio.h>
int sum_n_number(int s,int e)
{
    static int sum = 0;
    sum = sum + s; // 6
    s++;           // 4
    if (s <= e)
    {
        sum_n_number(s,e);
    }
    return sum;
}
void main()
{
    int res = sum_n_number(1,12);
    printf("sum = %d", res);
}