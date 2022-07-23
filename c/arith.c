#include<stdio.h>
void main()
{
int a,b,c,i,j,k,l,m,n,o,p;
float d,e,f,g,h,q;
printf("welcome to the arithmetic calculations \n");
printf("press 1 to continue \n");
scanf("%d",&a);
if(a==1)
{
printf("1.addition \n");
printf("2.substraction \n");
printf("3.multiplication \n");
printf("4.division \n");
scanf("%d",&b);
switch(b)
{
case 1:
printf("enter two no to add \n");
scanf("%d",&i);
scanf("%d",&j);
k=i+j;
printf("addition is %d",k);
break;
case 2:
printf("enter two no to substract \n");
scanf("%d",&l);
scanf("%d",&m);
o=l-m;
printf("substraction is %d",o);
break;
case 3:
printf("enter two no to multiply \n");
scanf("%f",&d);
scanf("%f",&e);
f=d*e;
printf("multiplication is %f",f);
break;
case 4:
printf("enter two no to divide \n");
scanf("%f",&g);
scanf("%f",&h);
q=g/h;
printf("the division is %f",q);
break;
default:
printf("wrong input");
}
}
else
{
printf("okk thank you");
}
}