#include<stdio.h>
int main()
{
	float a,b,c,i=0;
	printf("Enter the numbers:");
	scanf("%f%f",&a,&b);
	c=a/b;
	i=c-(c*b);
	printf("The remainder is: %f",a);
	return 0;
}
