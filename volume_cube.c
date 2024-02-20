//calculate the volume of cube
#include <stdio.h>
float volume();
int main()
{
	float v;
	v=volume();
	printf("The volume of the cube is:%f",v);
	return 0;
}
float volume()
{
	float a,vol;
	printf("Enter the side of the cube:");
	scanf("%f",&a);
	vol=a*a*a;
	return vol;
}
