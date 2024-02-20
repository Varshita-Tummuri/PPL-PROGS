#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the three nos:");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y & x>z)
	{
		printf("%d is the largest number\n",x);
		if(z>y & z>x)
		{
			printf("%d id the smallest number",z);
		}
		else if(y<x & y<z)
		{
			printf("%d is the smallest number",y);
		}
	}
	else if(z>y & z>x)
	{
		printf("%d is the largest number\n",z);
		if(x<y & x<z)
		{
			printf("%d id the smallest number",x);
		}
		else if(y<x & y<z)
		{
			printf("%d id the smallest number",y);
		}
	}
	if(y>x & y>z)
	{
		printf("%d is the largest number\n",y);
		if(x<y & x<z)
		{
			printf("%d id the smallest number",x);
		}
		else if(z>y & z>x)
		{
			printf("%d id the smallest number",z);
		}
	}
	
	return 0;	
}
