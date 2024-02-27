//ternary operators used in functions
#include <stdio.h>
void check(int a,int b)
{
	int y;
	if(a>b)
	{
		printf("Since %d > %d, their division will be: ",a,b);
		y=a/b;
	}
	else
	{
		printf("Since %d < %d, their multiplication will be: ",a,b);
		y=a*b;
	}
	printf("\ny=%d, \na=%d, b=%d",y,a,b);
}
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	(a>b)?check(a,b):check(a,b);
	return 0;
}
