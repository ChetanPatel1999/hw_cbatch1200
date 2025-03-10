// wap to take student subject marks and dispaly their percentage.
#include <stdio.h>
void main()
{
    int hindi, math, english, rno;
    float per;
    printf("enter student rno :");
    scanf("%d", &rno);
    printf("student hindi marks : ");
    scanf("%d", &hindi);
    printf("student math marks : ");
    scanf("%d", &math);
    printf("student english marks : ");
    scanf("%d", &english);
    per = ((hindi + english + math) / 300.0) * 100;
    printf("\nstudent result <--------->\n");
    printf("________________________________\n");
    printf("student rno : %d\n", rno);
    printf("________________________________\n");
    printf("subject name         marks\n");
    printf("hindi                 %d\n", hindi);
    printf("math                  %d\n", math);
    printf("english               %d\n", english);
    printf("________________________________\n");
    printf("percentage            %.2f\n", per);
}