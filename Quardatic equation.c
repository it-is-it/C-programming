#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,d,r1,r2;
	printf("Enter the value of a , b , c as given in the quardatic equation :");
	scanf("%f %f %f",&a,&b,&c);
	d = (b*b) -4*a*c;
	if(d==0)
	{
		r1 = -b / 2*a;
		r2 = r1;
		printf("\nThe roots are real and equal.\n");
		printf("The roots are %.2f and %.2f",r1,r2);
	}
	else if (d>0)
	{
		r1 = - (b+sqrt(b)) / (2*a);
		r2 = - (b-sqrt(b)) / (2*a);
		printf("\nThe roots are real and distinct.\n");
		printf("The roots are %.2f and %.2f",r1,r2);
	}
	else
	{
		printf("The roots are complex and imagainary.\n");
	}
	return 0;
}
