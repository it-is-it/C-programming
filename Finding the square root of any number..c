#include<stdio.h>
#include<math.h>

void main()
{
	float n,root;
	
	printf("Enter a number:");
	scanf("%f",&n);
	
	root = sqrt(n);
	printf("\nsquare root of %.2f is %.2f",n,root);
	
	getch();
}
