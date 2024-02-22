//to find if a number is a perfect number or not
#include <stdio.h>
int  main()
{
	int n,i,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("Congrats!! This number is a perfect number!");
	}
	else if(sum!=n)
	{
		printf("Nope. this number is not perfect number.");	
	}
	return 0;
}
