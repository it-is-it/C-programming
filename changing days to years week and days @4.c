#include<stdio.h>

int main()
{
	int year,days,week;
	
	printf("Enter the given number of days:");
	scanf("%d",&days);
	
	year = (days/365);
	week = (days%365)/7;
	days = days - ((year*365) + (week*7));
	
	printf("\nRequired no of Years: %d",year);
	printf("\nRequired no of Week: %d",week);
	printf("\nRequired no of Day: %d",days);
	
	return 0;
}
