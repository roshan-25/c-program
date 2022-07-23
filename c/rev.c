//write a program to reverse a no
#include<stdio.h>
void main()
{
int a,b,r;
printf("enter a no to reverse it");
scanf("%d",&a);
while(a>0)
{
	b=a%10;
	a=a/10;
	r=r*10+b;
}
printf("the reverse of the no is %d",r);
}