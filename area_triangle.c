//calculate area of a triangle using functions
#include <stdio.h>
float area1();
float area2();
int main()
{
	float x,y;
	y=area1();
	x=area2();
	printf("Area of triangle using method 1:%f and using method 2 is:%f",y,x);
	return 0;
}
float area1()
{
	float a,b,area;
	printf("Enter the base and height of the triangle:");
	scanf("%f%f",&a,&b);
	area=0.5*a*b;
	return area;
}
float area2()
{
	float v,t,d,ar,s;
	printf("Enter the first value:");
	scanf("%f",&v);
	printf("Enter the second value:");
	scanf("%f",&t);
	printf("Enter the third value:");
	scanf("%f",&d);
	s=v+t+d;
	ar=s/2;
	return ar;
}
