#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void above_5_pen(struct pen arr[], int s)
{
    int i;
    printf("pen which price above 5rs  : \n");
    for (i = 0; i < s; i++)
    {
        if (arr[i].price > 5)
        {
            printf("%s\n", arr[i].name);
        }
    }
}
void main()
{
    int n;
    printf("enter struct array size : ");
    scanf("%d", &n);
    struct pen p[n];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter pen%d info :\n", i + 1);
        printf("enter pen name : ");
        scanf("%s", p[i].name);
        printf("enter pen price : ");
        scanf("%d", &p[i].price);
        printf("enter pen rating : ");
        scanf("%f", &p[i].rating);
    }

    // display array data
    for (i = 0; i < n; i++)
    {
        printf("pen%d info : \n", i + 1);
        printf("pen name : %s\n", p[i].name);
        printf("pen price : %d\n", p[i].price);
        printf("pen rating : %.1f\n", p[i].rating);
        printf("------------------------------------\n");
    }
    above_5_pen(p, n);
}