#include<stdio.h>
void main()
{
int a,b;
int*p1;
int*p2;
printf("enter two numbers to add");
scanf("%d",&a);
scanf("%d",&b);
p1=&a;
p2=&b;
printf("the sum is %d",*p1+*p2);
}
