#include<stdio.h>

void main()
{
	int age;
	printf("Enter your age: \n");
	scanf("%d", &age);

	printf("You have entered %d as your age",age);
	if(age>=18){
		printf("you are eligible to vote.");
	}
	else{
		printf("you are not eligible for voting.");
	}
}
