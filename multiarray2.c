#include<stdio.h>

void main()
{
	char name[3][10];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("\nEnter your name:",i);
		scanf("%s",&name[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("\n%s",name[i]);
	}
}
