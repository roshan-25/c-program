#include<stdio.h>
void main()
{
int n;
int*p;
int*q;
printf("enter a number");
scanf("%d",&n);
p=&n;
printf("the address of the entered number is %u",p);
q=p++;
printf("the address after the decrement is %u",q);
}