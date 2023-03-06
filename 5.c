#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

int main()
{
	int a,b;
	char choice;
	printf("Enter the required two integer as input : \n");
	scanf("%d %d",&a,&b);
	printf("\n 1. Add\n 2. Substract\n 3. Multiply\n 4. Division\n 5. Modulus\n");
	Printf("\nChoose one operation from the above : (1-5)");
	scanf("%c",&choice);
	switch(choice)
	{
		case 1: 
			printf("Addition result = %d",a+b);
		        break;
		case 2: 
			printf("Substraction result = %d",a-b);
	     	    break;
		case 3: 
			printf("Multiplication result = %d",a*b);
	         	break;
		case 4: 
			printf("Divide result = %d",a/b);
	         	break;
    	case 5:
			printf("Remainder result = %d",a%b);
	         	break;
		default: 
			printf("Wrong input is given by the user.");
	}
	return 0;
}
