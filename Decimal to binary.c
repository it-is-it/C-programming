#include<stdio.h>

int main()
{
	int n,b=0,p=1,r;
	printf("Enter the given decimal number : \n");
	scanf("%d",&n);
	while(n>0)
	{
		r = n%2;
		b = b+r*p;
		p = p*10;
		n = n/2;
	}
	printf("Binary number of the entered decimal number is : %d",b);
	
	return 0;
}
