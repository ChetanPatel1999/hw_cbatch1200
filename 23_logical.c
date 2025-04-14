// logical operator
#include <stdio.h>
void main()
{
    int ans;
    // ans = 12 > 6 && 89<90 && 8==9;
    // ans = 12 > 6 || 899<90 || 8==9;
    // ans = !(12 > 7);
    ans = !(12 > 7 && 12!=12);
    printf("ans = %d", ans);
}