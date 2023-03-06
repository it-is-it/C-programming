#include<stdio.h>
#include<math.h>

int main()
{
	float pie=3.14;
	float area,radius;
	
	printf("Enter the radius of the circle :\n");
	scanf("%f",&radius);
	area = pie * radius * radius ;
	printf("The area of the circle having radius %.2f is %.2f",radius,area);
	return 0;
}
