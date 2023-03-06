#include<stdio.h>

void main()
{
	int n,i,rem,reverse,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		rem = n%10;
		reverse = reverse * 10 + rem;
		n = n/10;
	}
	if(temp==reverse)
	{
		printf("%d is a palindrome",temp);
	}
	else 
	{
		printf("%d is not a palindrome",temp);
	}
}
	
