#include<stdio.h>

int main()
{
	char name[20];
	int dob[10],number[15];
	printf("Please enter your name: \n");
	scanf("%s",&name);
	printf("Please enter your date of birth: \n");
	scanf("%s",&dob);
	printf("Enter your mobile number: \n");
	scanf("%s",&number);
	
	printf("\nYour name is : %s \n",name);
	printf("Your date of birth is: %s \n",dob);
	printf("Your mobile number is: %s \n",number);
}
