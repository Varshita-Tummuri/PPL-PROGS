//show polindrame of a number
#include <stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter a number: ");
	scanf("%d",&x);
	if(x!=0)
	{
		y=x%100;
		temp=x-y;
		x=temp/10;
	}
	printf("The REVESE IS %d",)
	return 0;
}
