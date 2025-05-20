// type def example
#include <stdio.h>
typedef long long int lli;
typedef double dl;
struct student_of_10_class_A_betch
{
    int rno;
    float per;
};
typedef struct student_of_10_class_A_betch s10a;
void main()
{
    s10a s1;
    lli a = 6567;
    dl d;
    char c;
    printf("size of long long int : %d\n", sizeof(a));
    printf("size of double : %d\n", sizeof(d));
    printf("size of char : %d\n", sizeof(c));
}