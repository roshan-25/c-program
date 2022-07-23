#include<stdio.h>
void main()
{
int n,i,j,k;
int smallest;
printf("enter the  no of terms you want to enter");
scanf("%d",&n);
int a[n];
int*p[n];
printf("enter the nos of which you want the smallest number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
smallest=a[0];
for(j=0;j<n;j++)
{
p[j]=&a[j];
}
for(k=0;k<n;k++)
{
if(*p[k]<smallest)
{
smallest=*p[k];
}
}
printf("the smallest is %d",smallest);
}