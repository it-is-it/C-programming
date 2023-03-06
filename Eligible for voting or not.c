#include<stdio.h>

void main()
{
	int age;
	
	printf("Enter the age of the person:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("You are eligible to vote",age);
	}
	else
	{
		printf("You are not eligible to vote",age);
	}
	
}
