//assignment 2- grade sheet
#include <stdio.h>
int main()
{
	float a,b,c,d,e,sum,agg;
	printf("Enter the marks of sub 1:");
	scanf("%f",&a);
	printf("\nEnter the marks of sub 2:");
	scanf("%f",&b);
	printf("\nEnter the marks of sub 3:");
	scanf("%f",&c);
	printf("\nEnter the marks of sub 4:");
	scanf("%f",&d);
	printf("\nEnter the marks of sub 5:");
	scanf("%f",&e);
	if(a>40 && b>40 && c>40 && d>40 && e>40)
	{
		printf("\nYou have passed!");
		sum=a+b+c+d+e;
		agg=(sum/500)*100;
		printf("\nYour aggregate percentage is:%f",agg);
		if(agg>=75)
		{
			printf("\nGrade: A");
		}
		else if(agg<75 && agg>=60)
		{
			printf("\nGrade: B");
		}
		else if(agg<60 && agg>=50)
		{
			printf("\nGrade: C");
		}
		else if(agg<50 && agg>=40)
		{
			printf("\nGrade: D");
		}
	}
	else
	{
		printf("\nFailed!");
	}
	return 0;
}
