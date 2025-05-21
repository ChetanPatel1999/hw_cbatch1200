#include <stdio.h>
void main()
{
    int i, fact = 1, n;
    FILE *ptr;
    ptr = fopen("facto.txt", "a");
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", n, fact);
    fprintf(ptr, "factorial of %d = %d\n", n, fact);
    fclose(ptr);
}