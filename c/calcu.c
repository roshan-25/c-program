#include<stdio.h>
void main()
{
int g,a,s,m,b,c,d,e,st,h,f,i,j;
float di;
printf("welcome to the PPK CALCULATOR \n");
printf("enter 1 to continue \n");
scanf("%d",&a);
printf("enter the serial no of the operation you want to make \n");
printf("1.addition \n");
printf("2.substraction \n");
printf("3.multiplication \n");
printf("4.division \n");
scanf("%d",&g);
if(g=1)
{
printf("enter the two no you want to add \n");
scanf("%d",&c);
scanf("%d",&b);
s=b+c;
printf("sum of the entered nos are %d",s);
}
else if(g=2)
{
printf("enter the no you want to substract \n");
scanf("%d",&d);
scanf("%d",&e);
st=d-e;
printf("the substraction= %d",st);
}
else if(g=3)
{
printf("enter two nos you want to multiply \n");
scanf("%d",&f);
scanf("%d",&h);
m=f*h;
printf("the multiplication is %d",m);
}
else
{
printf("enter the two no you want to divide \n");
scanf("%d",&i);
scanf("%d",&j);
di=i/j;
printf("the division is %d",di); 
}
}

 
