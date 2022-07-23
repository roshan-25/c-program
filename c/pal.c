//input a number and check whether it is palindrome or not
#include<stdio.h>
void main()
{
int a,b,c,r=0;
printf("enter a number to check whether it is palindrome or not");
scanf("%d",&a);
c=a;
while(a!=0)
{
b=a%10;
r=r*10+b;
a=a/10;
}
printf("the reverse is %d \n",r);
if(r==c)
{
	printf("palindrome");
}
else
{
	printf("not palindrome");
}
}