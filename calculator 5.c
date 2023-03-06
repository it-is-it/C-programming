#include<stdio.h>

int main()
{
	int a,b,choice;
	printf("Enter the required two integer as input : \n");
	scanf("%d %d",&a,&b);
	
	printf("\n1. Add\n2. Substract\n3. Multiply\n4. Division\n5. Modulus\n");
	Printf("\nChoose one operation from the above :(1-5)");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Addition result = %d",a+b);
		         break;
		case 2: printf("Substraction result = %d",a-b);
	     	    break;
		case 3: printf("Multiplication result = %d",a*b);
	         	break;
		case 4: printf("Divide result = %.2f",a/b);
	         	break;
    	case 5: printf("Remainder result = %d",a%b);
	         	break;
		default: printf("Wrong input is given by the user.");
	}
	return 0;
}
