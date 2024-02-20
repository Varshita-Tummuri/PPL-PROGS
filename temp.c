//conversion of temperature from celcius to farenhite
#include<stdio.h>
int main()
{
	float c,fh;
	printf("Enter the temperature in celcius:");
	scanf("%f",&c);
	fh=(c*1.8)+32;
	printf("The temperature in farenhite: %f",fh);
	return 0;
}
