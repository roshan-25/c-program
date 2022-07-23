#include<stdio.h>
void main()
{
    int a[10];
    int i,j,s,n;
    printf("enter ten nos");
    for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the number you want to find ");
scanf("%d",&n);
for(j=0;j<10;j++)
{
  if(a[j]==n)
  {
     s=j+1; 
  }
}
printf("the no is present in %d",s);
}
