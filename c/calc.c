//calculator program
#include<stdio.h>
void main()
{
int a;
printf("welcome to the pratimm luck factor \n");
printf("enter any random number to know about your luck today");
scanf("%d",&a);
if(a<100)
{
printf("you are going to have a bad day folk");
}
else if(a>100&a<200)
{
printf("you are going to have a day as usual");
}
else
{
printf("good day");
}
}

