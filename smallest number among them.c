#include<stdio.h>

void main()
{
	int i,num[5],min;
	for(i=0;i<5;i++)
	{
	printf("Enter the number:");
	scanf("%d",&num[i]);
	}
	min=num[0];
	for(i=0;i<5;i++)
	{
		if(min>num[i])
		{
			min = num[i];
		}
	}
	printf("\nThe smallest number among the given input is %d",min);
	getche();
}
