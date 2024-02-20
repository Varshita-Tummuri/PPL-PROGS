#include <stdio.h>
int fac();
int main()
{
	fac();
	return 0;
}
int fac()
{
	int a,i;
	printf("Enter a number to calculate factorial:");
	scanf("%d",&a);
	for(i=a-1;i>=1;i--)
	{
		a=a*i;
	}
	printf("The factorial is:%d",a);
	return a;
}
