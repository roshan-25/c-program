#include<stdio.h>
void main()
{
    char a[100];
	char b[100];
    int l,n=0
    printf("enter a string to reverse");
    scanf("%s",&a);
    l=strlen(a);
	for(int i=l-1;i>=0;i--)
	{
	b[n]=a[i];
	b=b+b[n];
	n++;
	}
	printf("the reverse of the string is %s",b);  
}