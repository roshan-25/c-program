//find factorial of a number
#include<stdio.h>
void main()
{
int a,b,c=1;
printf("enter a number to find its factorial");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
	c=c*b;
}
printf("the factorial is %d",c);
}