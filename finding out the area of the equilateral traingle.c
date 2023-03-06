#include<stdio.h>
#include<math.h>

void main()
{
	float s,a;
	printf("Enter a side of an equilateral traingle:");
	scanf("%f",&s);
	
	a = (sqrt(3)/4) * (s * s);
	
	printf("\nThe area of traingle of side %.2f is %.2f",s,a);
	
	getch();
}
