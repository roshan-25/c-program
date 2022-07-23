#include<stdio.h>
void main()
{
float b,d,h,g;
printf("enter the basic salary of ramesh-");
scanf("%f",&b);
d=(0.4)*b;
printf("the dearness allowance is %f \n",d);
h=(0.2)*b;
printf("the hra is %f \n",h);
g=b+d+h;
printf("the gross salary of ramesh is--- %f ", g);
} 
