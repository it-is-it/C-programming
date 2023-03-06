#include<stdio.h>
#include<math.h>

void main()
{
	int time;
	float principal,rate,CI;
	
	printf("Enter Principal, Rate and Time:");
	scanf("%f%f%d",&principal,&rate,&time);
	
	CI = principal * pow((1+rate/100),time);
	printf("\nCompound Interest of Rs %.2f for %d years at %.2f per annum is Rs %.2f",principal,time,rate,CI);
	
	getch();
}
