#include<stdio.h>
void main()
{
    int a,b=0,n;
    printf("enter the number");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        if(n%a==0)
        {
            b++;
        }
    }
    if(b>2)
    {
        printf("not a prime number");
    }
    else 
    {
        printf(" prime number");
    }
}