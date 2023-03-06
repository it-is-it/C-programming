#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("Value of a and b before swapping: %d and %d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	a=a/b;
	printf("\nValue of a and b after swapping: %d and %d",a,b);
	
	getch();
}
