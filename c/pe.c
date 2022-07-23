#include<stdio.h>
void main()
{
int a,b,c=0;
int*p1;
int*p2;
int*p3;
printf("enter two numbers");
scanf("%d %d",&a,&b);
p1=&a;
p2=&b;
p3=&c;
printf("the entered nos are a= %d",*p1);
printf("the entered nos are b= %d",*p2);
*p3=*p1;
*p1=*p2;
*p2=*p3;
printf("thed nos after exchange a=%d",*p1);
printf("the nos after exchange a=%d",*p2);
}
