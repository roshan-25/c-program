#include<stdio.h>
void main()
{
    int a[10];
    int i,j,s=0;
    printf("enter ten nos");
    for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(j=0;j<10;j++)
{
    s=s+a[j];
}
printf("the sum of the array is %d",s);
}