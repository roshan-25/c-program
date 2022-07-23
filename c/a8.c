#include<stdio.h>
void main()
{
float dk,dm,di,df,dc;
printf("enter the distance between two cities in km--");
scanf("%f",&dk);
dm=1000*dk;
dc=dm*100;
di=dk*39370;
df=dk*3281;
printf("the distance in metre is %f \n",dm);
printf("the distance in inch is %f \n",di);
printf("the distance in feet is %f \n",df);
printf("the distance in centimetre is %f ",dc);
}
