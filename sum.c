//to display sum of odd natural numbers
#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("The odd numbers are:");
	for(i=0;i<10;i++)
	{
		if(i%2!=0)
		{
			printf(" %d ",i);
			sum=sum+i;
		}
	}
	printf("\nThe sum is:%d",sum);
	return 0;
}
