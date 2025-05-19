#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2, p3;

    // take structur data from user
    printf("enter pen1 info :\n");
    printf("enter pen name : ");
    scanf("%s", p1.name);
    printf("enter pen price : ");
    scanf("%d", &p1.price);
    printf("enter pen rating : ");
    scanf("%f", &p1.rating);

    // take structur data from user
    printf("enter pen2 info :\n");
    printf("enter pen name : ");
    scanf("%s", p2.name);
    printf("enter pen price : ");
    scanf("%d", &p2.price);
    printf("enter pen rating : ");
    scanf("%f", &p2.rating);

    // display data p1
    printf("pen1 info : \n");
    printf("pen name : %s\n", p1.name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);

    // display data p2
    printf("pen2 info : \n");
    printf("pen name : %s\n", p2.name);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n", p2.rating);
}