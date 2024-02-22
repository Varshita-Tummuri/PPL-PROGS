//print reverse of a number(simple)
#include <stdio.h>
int main()
{
	int x,y,temp=0,a;
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
	return 0;
}
