//print reverse of a number(simple)
#include <stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter a number:");
	scanf("%d",&x);
	printf("\nNumber after it is reversed:");
	if(x>1)
	{
		y=x%10;
		printf("%d",y);
		temp=x-y;
		x=temp/10;
	}
	return 0;
}
