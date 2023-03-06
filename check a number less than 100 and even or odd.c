#include<stdio.h>

void main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	if(n<100)
	{
		if(n%3 ==0)
		{
			printf("%d is less than 100 and odd number",n);
		}
		else
		{
			printf("%d is less than 100 and even number",n);
		}
	}
	else {
		printf("%d is more than 100",n);
	}
	
}
