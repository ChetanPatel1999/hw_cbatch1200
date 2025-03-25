// wap to print name of student according to roll number.
#include <stdio.h>
void main()
{
    int rno;
    printf("enter your roll number : ");
    scanf("%d", &rno);
    if (rno == 1225)
    {
        printf("roll no : 1225\n");
        printf("monika patidar\n");
        printf("course name : c/cpp");
    }
    else if (rno == 1240)
    {
        printf("mradul jain");
    }
    else if (rno == 1238)
    {
        printf("sahaj chabra");
    }
    else
    {
        printf("incorrect roll number");
    }
}