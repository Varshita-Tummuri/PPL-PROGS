//swapping of 2 numbers without using temporary variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("Numbers before swapping: a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Numbers after swapping: a=%d and b=%d",a,b);
	return 0;
}
