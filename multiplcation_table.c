#include<stdio.h>
int main()
{
	int x,y,i;
	printf("Enter a number:");
	scanf("%d",&x);
	 printf("The multiplication table of %d is\n",x);
	for(i=1;i<=10;i++)
	{
		y=x*i;
		printf("%d*%d=%d\n",x,i,y);
	}
	return 0;
	
}
