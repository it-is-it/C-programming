#include<stdio.h>

void main()
{
	int roll[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter [%d] [%d] element:",i,j);
			scanf("%d",&roll[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Element in [%d] [%d] is : %d\t",i,j,roll[i][j]);
		}
		printf("\n");
	}
}
