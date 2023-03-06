#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	int dob[10],number[15];
	printf("Please enter your name: \n");
	gets(name);
	printf("Please enter your date of birth: \n");
	gets(dob);
	printf("Enter your mobile number: \n");
	gets(number);
	
	printf("\nYour name is : %s \n",name);
	puts(name);
	printf("Your date of birth is: %s \n",dob);
	puts(dob);
	printf("Your mobile number is: %s \n",number);
	puts(number);
	getch();
}
