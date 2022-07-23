#include<stdio.h>
void main()
{
printf("enter a number");
int n;
int*p;
scanf("%d",&n);
p=&n;
printf("the adress of the number entered is %d",p);
}


