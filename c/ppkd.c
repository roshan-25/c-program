#include<stdio.h>
void main()
{
    int a[10];
    int i,j;
    printf("enter ten nos");
    for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
printf("the reverse of the numbers");
for(j=9;j>=0;j--)
{
    printf("%d ",a[j]);
}
}