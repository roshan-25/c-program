#include<stdio.h>
void main()
{
int i,j;
int arr[10];
printf("enter ten numbers you want to print in reverse manner");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
for(j=9;j>=0;j--)
{
printf("%d",arr[j]);
}
}
