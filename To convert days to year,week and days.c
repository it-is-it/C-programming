#include<stdio.h>

int main()
{
	int year,days,week;
	
	printf("Enter the given number of days:");
	scanf("%d",&d);
	
	y = (d/365);
	w = (d%365)/7;
	d = d - ((y*365) + (w*7));
	
	printf("\nRequired no of Years: %d",y);
	printf("\nRequired no of Week: %d",w);
	printf("\nRequired no of Day: %d",d);
	
	return 0;
}
