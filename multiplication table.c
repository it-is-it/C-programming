#include<stdio.h>

void main()
{
	int i,j,n;
	printf("Enter the given number for mul table :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d * %d = %d \n",i,j,i*j);
		}
		printf("\n");
	}
} 
