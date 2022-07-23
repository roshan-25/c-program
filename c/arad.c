#include<stdio.h>
void main()
{
    int a[10],i,j;
    int s,g;
    printf("enter ten nos of the array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0],g=a[0];
    for(j=0;j<10;j++)
    {
        if(a[j]>g)
        {
            g=a[j];
        }
        else if(a[j]<s)
        {
            s=a[j];
        }
        
    }
    printf("the greatest no of the array %d \n",g);
    printf("the smallest no of the array %d",s);
}xz