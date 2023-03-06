#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter the two angles which are given:");
	scanf("%d%d",&a,&b);
	
	c = 180 - (a+b);
	printf("\n3rd side angle is %d",c);
	
	getch();
}
