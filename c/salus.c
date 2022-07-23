#include<stdio.h>
#include<string.h>
void main()
{
    int i;
struct ppk
{
int s;
char n[100];
}p[5];
for(i=0;i<5;i++)
{
printf("enter the name of the %d employee",(i));
gets(p[0].n);
printf("enter the salary of the %d employee",(i));
scanf("%d",&p[i].s);
}
for( i=0;i<5;i++)
{
printf("the name of the %d employee is %s the salary is %d \n",(i),p[i].n,p[i].s);
}
}
