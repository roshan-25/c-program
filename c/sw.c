//mark obtained in three subjects find the total marks if the total greater then equals to 80 print excellent,if total greater than equal to 60 print good greater than equal to 40 average write this program in switch case
#include<stdio.h>
void main()
{
int a,b,c,s,avg,n;
printf("enter the marks obtained in three subjects");
scanf("%d %d %d",&a,&b,&c);
s=a+b+c;
avg=s/3;
printf("average is %d \n",avg);
printf("enter the option of yours average \n");
printf("1.greater than 80 \n");
printf("2.greater than 60 \n");
printf("3.greater than 40 \n");
printf("4.chadi de nai kaha na");
scanf("%d",&n);
switch(n)
{
case 1:
printf("excellent");
break;
case 2:
printf("good");
break;
case 3:
printf("average");
break;
case 4:
printf("fail");
break;
default:
printf("wrong input");
}
}