#include<stdio.h>

void main()
{
	int i,n,rem,reverse,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		rem = n%10;
		reverse = reverse * 10 + rem;
		n = n/10;
	}
	printf("reverse is %d is %d",temp,reverse);
}
