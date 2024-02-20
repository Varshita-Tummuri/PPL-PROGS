//accept 5 nos from user and calculate sum and average
#include<stdio.h>
int main()
{
	float n,i,sum=0;
	printf("Enter 5 random numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("The sum is:%d",sum);
	return 0;
}
