#include<stdio.h>
void main()
{
int i,j,n;
printf("enter the no of terms you want to enter");
scanf("%d",&n);
int a[n];
printf("enter the numbers");
for(j=0;j<=n;j++)
{
	scanf("%d",&a[j]);
}
int large=a[0];
int small=a[0];
for(i=0;i<=n;i++)
{
if(large<a[i])
{
large=a[i];
}
else if(small>a[i])
{
small=a[i];
}
}
printf("the largest no is %d",large);
printf("the smallest no is %d",small);
}