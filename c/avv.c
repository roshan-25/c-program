//average of all numbers upto a range
#include<stdio.h>
void main()
{
int a,i,s=0,avg;
printf("enter the no upto which you want to find the average");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
s=s+i;
}
avg=s/a;
printf("average is %d \t",avg);
}
