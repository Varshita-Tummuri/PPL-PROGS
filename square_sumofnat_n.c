//to display square of natural numbers and their sum
#include<stdio.h>
int main()
{
	int i,y,sum;
	for(i=1;i<=10;i++)
	{
		y=i*i;
		printf("%d^2=%d\n",i,y);
		sum=sum+y;
	}
	printf("The sum of the squares of the natural numbers is:%d",sum);
	return 0;
}

