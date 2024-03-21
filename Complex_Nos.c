#include <stdio.h>
void complexRead(int a,int b,int x, int y)
{
	printf("The first complex number is: %d+i%d\n",x,y);
	printf("The second complex number is: %d+i%d\n",a,b);	
}
void complexSum(int a,int b,int x, int y)
{
	int sum1,sum2;
	sum1=x+a;
	sum2=y+b;
	printf("The sum of the complex number is: %d+i%d\n",sum1,sum2);
}
void complexMultiplication(int a, int b,int x,int y)
{
	int mul1,mul2;
	mul1=(a*x)-(b*y);
	mul2=(a*y)+(b*x);
	printf("The multiplication of two complex numbers: %d+i%d\n",mul1,mul2);
}
int main()
{
	int a,b,x,y;
	printf("enter the real and imaginary part of first complex number: ");
	scanf("%d%d",&x,&y);
	printf("enter the real and imaginary part of second complex number: ");
	scanf("%d%d",&a,&b);
	complexRead(a,b,x,y);
	complexSum(a,b,x,y);
	complexMultiplication(a,b,x,y);
	return 0;
}
