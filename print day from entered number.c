#include<stdio.h>
#include<math.h>

void main()
{
	int n;
	printf("Choose a Number (1-7):");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: printf("Sunday"); break;
		case 2: printf("Monday"); break;
		case 3: printf("Tuesday"); break;
		case 4: printf("Wednesday"); break;
		case 5: printf("Thrusday"); break;
		case 6: printf("Friday"); break;
		case 7: printf("Saturday"); break;
		default: printf("Wrong Choice");
	}
}
