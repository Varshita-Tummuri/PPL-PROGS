//calculate area of rectangle using functions
#include <stdio.h>
int area();
int main()
{
	int c;
	c=area();
	printf("The area of the rectangle is:%d",c);
	return 0;
}
int area()
{
	int x,y,a;
	printf("Enter the values:");
	scanf("%d%d",&x,&y);
	a=x*y;
	return a;
}
