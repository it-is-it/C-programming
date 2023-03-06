#include<stdio.h>

void main()
{
	float b,h,a;
	printf("Enter the value of h and b(in cm) ");
	scanf("%f",&b,&h);
	
	a=(1/2)*b*h;
	
	printf("\n Area of the right angled traingle having breadth %f cm and height %f cm is %.2f cm square");
	
	getch();
}
