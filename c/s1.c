#include<stdio.h>
void main()
{
    int a,b;
    float s,m,d,n;
    printf("enter two number ");
    scanf("%d %d",&a,&b);
    s=a+b;
    n=a-b;
    d=a/b;
    m=a*b;
    printf("sum of the two numbers is %f \n",s);
    printf("substraction of the number is %f \n",n);
    printf("division of the number is %f \n",d);
    printf("the product of the two number is %f \n",m);
}