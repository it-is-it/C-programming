#include<stdio.h>

void main()
{
	float c,f;
	printf("Enter temperature in celcius:");
	scanf("%f",&c);
	
	f = (1.8 * c) + 32 ;
	printf("\nTemperature in Farenheit: %f",f,c);
	
	getch();
}
