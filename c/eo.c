#include<stdio.h>
void main()
{
int i,j,k,n;
printf("enter the  terms you want even and odd series");
scanf("%d",&n);
int a[n];
printf("enter the nos");
for(k=0;k<=n;k++)
{
scanf("%d",&a[k]);
}
printf("the even number is");
for(i=0;i<=n;i++)
{
if(a[i]%2==0)
{
printf("%d",a[i]);
}
}
printf("the odd numbers are ");
for(j=0;j<=n;j++)
{
if(a[j]%2!=0)
{
printf("%d",a[j]);
}
}
}