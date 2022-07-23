#include<stdio.h>
void main()
{
int i,j;
float avg;
int sum=0;
int mark[10];
for(i=1;i<=10;i++)
{
	printf("enter the mark of the subject");
scanf("%d",&mark[i]);
}
for(j=1;j<=10;j++)
{
sum=sum+mark[j];
}
printf("the sum is %d \n",sum);
avg=sum/10;
printf("the average of the marks of 10 students is %f",avg);
}
