#include<stdio.h>

int main()
{
	float r, c;
	printf("Enter the radius of the circle : ");
	scanf("%f",&r);
	c = 2 * 3.14 * r;
	printf("circumference of the circle having radius %.2f is %.2f",r,c);
	
	return 0;
	}
