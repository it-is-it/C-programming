#include<stdio.h>
#include<math.h>

void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("%d is zero (0)",n);
	}
	else if(n>0)
	{
		printf("%d is Positive number",n);
	}
	else
	{
		printf("%d is Negative number",n);
	}
}
