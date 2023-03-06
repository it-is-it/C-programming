#include<stdio.h>

void main()
{
	float si,p,t,r;
	
	printf("Enter the value of p , t and r :");
	scanf("%f%f%f",&p,&t,&r);
	
	si = (p*t*r)/100;
	printf("\n Simple interest of principle %.2f for %.2f years at %.2f per annum is:%.4f",p,t,r,si);
	
	getch();
}

