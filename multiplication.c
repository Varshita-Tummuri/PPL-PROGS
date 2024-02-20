//PRINT MULTIPLICATION OF 2 NOS USING ARITHEMETIC OPERATOR
#include<stdio.h>
int main()
{
	int a,b,i,sum=0;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		sum=sum+b;
	}
	printf("The multiplcation of %d and %d is %d!",a,b,sum);
	return 0;
}
