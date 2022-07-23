#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("greatest of three numbers is %d",a);
    }
    else if(b>a&&b>c)
    {
        printf("greatest of three numbers is %d",b);
    }
else 
{
    printf("greatest of three numbers is %d",c);
}
}
   