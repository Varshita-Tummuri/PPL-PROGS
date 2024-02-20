#include <stdio.h>
union employee
{
	char employee_name[10];
	char designation[10];
	int basic_salary;
}var1;
int main()
{
	int ta,da,gross_sal;
	printf("Enter the employee name: ");
	scanf("%s",var1.employee_name);
	printf("\nEnter your designation: ");
	scanf("%s",var1.designation);
	printf("\nEnter your basic pay: ");
	scanf("%d",&var1.basic_salary);
	ta=var1.basic_salary*(0.05);
	printf("\nYour ta is:%d",ta);
	da=var1.basic_salary*(0.02);
	printf("\nYour da is:%d",da);
	gross_sal=ta+da+var1.basic_salary;
	printf("\nYour gross salary is: %d",gross_sal);
	return 0;
}
