#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
char b[100];
char r[100];
int j=0,l;
printf("enter your string to reverse it");
gets(a);
l=strlen(a);
for(int i=l;i>=0;i--)
{
b[j]=a[i];
r[100]=r[100]+b[j];
}
printf("the reverse of the string is %s",r);
}
