//print reverse of a number(functions)
#include <stdio.h>
void swapping()
{
    int x,y,a,temp;
    temp=0;
	printf("Enter a number:");
	scanf("%d",&x);
	a=x;
	while (x != 0) 
	{	
        	y = x % 10;
        	temp = temp * 10 + y;
        	x = x / 10;
   	}
    	printf("The reverse of %d is: %d\n",a, temp);
}
int main()
{
	swapping();
	return 0;
}
