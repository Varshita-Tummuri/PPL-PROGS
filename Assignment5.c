#include <stdio.h>
int main()
{
	int x,y,a,b,sum1,sum2,mul1,mul2,c,w,flag=0;
	printf("enter the real and imaginary part of first complex number: ");
	scanf("%d%d",&x,&y);
	printf("enter the real and imaginary part of second complex number: ");
	scanf("%d%d",&a,&b);
	printf("\n");
	printf("***MENU***\n");
	printf("1. Only to read\n");
	printf("2. Sum of complex numbers\n");
	printf("3. Multiplication of complex numbers\n\n");
	printf("Enter the desired operation number:");		scanf("%d",&c);
	switch (c)
	{
		case 1: printf("The first complex number is: %d+i%d\n",x,y);
				printf("The second complex number is: %d+i%d\n",a,b);
				break;
		case 2: sum1=x+a;
				sum2=y+b;
				printf("The sum of the complex number is: %d+i%d\n",sum1,sum2);
				break;
		case 3: mul1=(a*x)-(b*y);
				mul2=(a*y)+(b*x);
				printf("The multiplication of two complex numbers: %d+i%d\n",mul1,mul2);
				break;
		default:printf("Wrong number, try again!!");
				break;	
	}
	return 0;
}
