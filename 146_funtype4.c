// with return type but no parameter
#include <stdio.h>
int cube()
{
    int n, c;
    printf("enter a num : ");
    scanf("%d", &n);
    c = n * n * n;
    return c;
}
void main()
{
    printf("cube : %d", cube());
}