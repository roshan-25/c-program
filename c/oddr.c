//find out the odd numbers upto a given range
#include<stdio.h>
void main()
{
int a,b;
printf("enter the no upto which u want to find odd numbers");
scanf("%d",&a);
for(b=0;b<=a;b++)
{
if(b%2!=0)
{
printf("%d \t",b);
}
}
}