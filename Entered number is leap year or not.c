#include<stdio.h>
#include<math.h>

void main()
{
	int year;
	printf("Enter years:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d is year Leap year",year);
	}
	else
	{
		printf("%d is not Leap year",year);
	}
}
