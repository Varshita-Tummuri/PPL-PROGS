//take value from user and make its multiplication table
#include<stdio.h>
int main()
{
	int n,i=1,y;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=10)
	{
		y=n*i;
		printf("%d*%d=%d\n",n,i,y);
		i++;
	}
	return 0;
}
