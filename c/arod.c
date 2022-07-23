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
printf("the odd numbers of the array are ");
for(j=0;j<10;j++)
{
  if(a[j]%2!=0)
  {
      printf("%d ",a[j]);
  }
}
}
