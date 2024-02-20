//print reverse of a number(functions)
#include <stdio.h>
int swapping(int x,int y,int temp)
{
	printf("Enter a number:");
	scanf("%d",&x);
	printf("here i am");
	if(x>1)
	{
		printf("i am inside the loop!");
		y=x%10;
		printf("%d",y);
		temp=x-y;
		x=temp/10;
		printf("%d",x);
	}
	return 0;	
}
int main()
{
	int swapping();
	return 0;
}
