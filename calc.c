#include<stdio.h>

void main()
{
	int a,b;
	char choice;
	
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	printf("\n+. Add\n-. Substract\n*. Multiply\n/. Division\n%. Modulus\nq. Quit/Exit\n");
	Printf("\nChoose 1 operation:(+-q)");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+': printf("Addition result = %d",a+b);
		         break;
		case '-': printf("Substraction result = %d",a-b);
	     	    break;
		case '*': printf("Multiplication result = %d",a*b);
	         	break;
		case '/': printf("Divide result = %.2f",a/b);
	         	break;
    	case '%': printf("Remainder result = %d",a%b);
	         	break;
		case 'q': printf("Quitting program");
	         	break;
		default: printf("Wrong choice");
	}
}
