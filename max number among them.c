#include<stdio.h>

void main()
{
	int i,num[5],max;
	for(i=0;i<5;i++)
	{
	printf("Enter the number:");
	scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=0;i<5;i++)
	{
		if(max<num[i])
		{
			max = num[i];
		}
	}
	printf("\nThe largest number among the given input is %d",max);
	getche();
}
