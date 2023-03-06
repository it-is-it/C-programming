#include<stdio.h>

void main()
{
	float f,c;
	
	printf("Enter temperature in farenheit:");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	
	printf("\n Temperature in celcius: %.2f",c);
	getch();
}
