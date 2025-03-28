//wap to print your friend name according to given frist latter of name.
#include<stdio.h>
void main()
{
   char ch;
   printf("enter first latter of name : ");
   scanf("%c",&ch);//t
   switch(ch)
   {
    case 'm' :printf("monika patidar");break;
    case 'g' :printf("gaurav patidar");break;
    case 'v' :printf("vikash patidar");break;
    case 'p' :printf("pawan patidar");break;
    case 'l' :printf("lakhan patidar");break;
    default : printf("please enter valid char ");
   }
}