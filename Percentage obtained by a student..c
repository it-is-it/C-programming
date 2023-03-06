#include<stdio.h>

int main()
{
	float marks1, marks2, marks3,average;
	printf("Enter the given percentage obtained by a student in subject 1: \n");
	scanf("%f",&marks1);
	printf("Enter the given percentage obtained by a student in subject 2: \n");
	scanf("%f",&marks2 );
	printf("Enter the given percentage obtained by a student in subject 3: \n");
	scanf("%f",&marks3);
	
	average = (marks1 + marks2 + marks3) / 3;
	printf("Average : %0.2f \n",average);
	
	if(average>=90 )
	{
		printf("Given student has got grade A.");
	}
	else if(average>=80)
	{
		printf("Given student has got grade B.");
	}
	else if(average>=70)
	{
		printf("Given student has got grade C.");
	}	
	else if(average>=60)
	{
		printf("Given student has got grade D.");
	}
	else
	{
		printf("Given student has got grade F.");
	}
	return 0;
}
