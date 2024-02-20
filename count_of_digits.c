//print count of number of digits in a number
#include <stdio.h>
int cnt=0;
int count(int x)
{
	if(x>0)
	{
		cnt++;
		count(x/10);
	}
	else
	{
		return cnt;
	}
}
int main()
{
	int x,c;
	printf("Enter a number:");
	scanf("%d",&x);
	c=count(x);
	printf("\nThe count is: %d",c);
	return 0;
}
