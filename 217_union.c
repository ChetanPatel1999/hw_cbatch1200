#include <stdio.h>
#include <string.h>
union pen
{
    char name[8]; // data member
    int price;    // data member
    float rating; // data member
};
void main()
{
    union pen p1, p2, p3;
    printf("size of p1 : %d\n", sizeof(p1)); // 8 byte
    // set data in p1
    p1.price = 5;
    p1.rating = 3.5;
    strcpy(p1.name, "cello");

    // display data p1
    printf("pen1 info : \n");
    printf("pen name : %s\n", p1.name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);


    // display data p2
    printf("pen2 info : \n");
    strcpy(p2.name, "goldex");
    printf("pen name : %s\n", p2.name);
    p2.price = 10;
    printf("pen price : %d\n", p2.price);
    p2.rating = 4.5;
    printf("pen rating : %.1f\n", p2.rating);
    
}