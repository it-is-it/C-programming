#include<stdio.h>

void main()
{
	int a,b,c,great,middle,small;
	printf("Enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		great = a;
		if(b>c)
		{
			middle = b;
			small = c;
		}
		else
		{
			middle = c;
			small = b;
		}
	}
	else if(b>a && b>c)
	{
		great = b;
		if(c>a)
		{
			middle = c;
			small = a;		
		}
		else
     	{
     		middle = a;
     		small = c;
	    }
	}
	else
	{
		great = c;
		if(a>b)
		{
			middle = a;
			small = b;
		}
		else
		{
			middle = b;
			small = a;
		}
	}
	printf("\nGreater number is %d",great);
	printf("\nMiddle number is %d",middle);
	printf("\nSmallest number is %d",small);
}
