#include<stdio.h>

void main()
{
	float subject[5],total=0,average;
	int i;
	for(i=0;i<5;i++)
	{
	printf("Enter the obtained marks:");
	scanf("%f",&subject[i]);
	total = total + subject[i];
	}
	average = total/5;
	printf("\nTotal mark obtained: %.2f",total);
	printf("\nAverage mark obtained: %.2f",average);
	getche();
}
