#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,c,d;
	printf("Enter all the four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is the largest",a);
	}
	else if(b>c && b>d)
	{
		printf("%d is the largest",b);
	}
	else if(c>d)
	{
		printf("%d is the largest",c);
	}
	else{
		printf("%d is the largest",d);
	}
}
