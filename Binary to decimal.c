#include<stdio.h>
#include<math.h>

int main()
{
	int binary, n, remainder, decimal = 0, i = 0;
	printf("Enter the given binary number : \n");
	scanf("%d",&binary);
	
	n = binary;
	
	while(n>0)
	{
		remainder = n % 10;
		decimal += remainder * pow(2, i++);
		n /= 10;
	}
	printf("Decimal number of the entered %d binary number is : %d",binary,decimal);
	
	return 0;
}
