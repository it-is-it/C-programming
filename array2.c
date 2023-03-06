#include<stdio.h>

int main()
{
	int num[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter the given number: ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
	}
}

