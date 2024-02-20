#include<stdio.h>
int main()
{
	int i,sum;
	printf("The first 10 natural numbers are:");
	for(i=1;i<=10;i++)
	{
		printf("%d\t",i);
		sum=sum+i;
	}
	printf("\nThe sum is:%d",sum);
	return 0;
}

