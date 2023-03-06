#include<stdio.h>

int main()
{
	int x,temp,rem,ans;
	printf("Enter the given number : \n");
	scanf("%d",&x);
	temp = x;
	while(x!=0)
	{
		rem=x%10;
		ans = ans + rem*rem*rem;
		x=x/10;
	}
	if(temp==ans)
	{
		printf("%d is an armstrong number.",temp);
	}
	else
	{
		printf("%d is not an armstrong number.",temp);
	}
	
	return 0;
}
