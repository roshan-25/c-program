#include<stdio.h>
void main()
{
int i,j,k,l;
for(i=0;i<5;i++)
{
for(j=5;j>i;j--)
{
printf("* ");
}
printf("\n");
}
for(i=0;i<5;i++)
{
for(j=0;j<=i;j++)
{
printf("* ");
}
printf("\n");
}
}