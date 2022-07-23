//fibonacci series
#include<stdio.h>
void main()
{
int a=0,b=1,c,d,in;
printf("enter the number of terms for which you want the fibonacci series");
scanf("%d",&c);
printf("%d %d",a,b);
for(i=2;i<=c;i++)
{
d=a+b;
a=b;
b=d;
printf("%d",d);
}
}