#include<stdio.h>
#include<string.h>
void main()
{
	struct student
	{
		char a[100];
		int m;
	}s[5];
	for(int i=0;i<5;i++)
	{
		printf("enter the name of the %d student   ",(i));
		gets(s[i].a);
	}
	for(int i=0;i<5;i++)
	{
		printf("enter the percentage obtained by %d student  ",(i));
		scanf("%d",&s[i].m);
	}
	for(int i=0;i<5;i++)
	{
		printf("the student name is %s and the percentage obtained is %d \n",s[i].a,s[i].m);
	}
}