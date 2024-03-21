//calculate the net payable salary of an employee
#include <stdio.h>
int main()
{
	int hra,ta,da,pt,basic_pay,gross_sal,net_sal;
	printf("Enter your basic pay:");
	scanf("%d",&basic_pay);
	hra=basic_pay*(0.1);
	printf("\nYour hra is:%d",hra);
	ta=basic_pay*(0.05);
	printf("\nYour ta is:%d",ta);
	da=basic_pay*(0.05);
	printf("\nYour da is:%d",da);
	gross_sal=basic_pay+hra+da;
	pt=basic_pay*(0.02);
	printf("\nYour pt tax is:%d",pt);
	net_sal=gross_sal-pt;
	printf("\nYour net salary is:%d",net_sal);
	return 0;
}
