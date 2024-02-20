#include <stdio.h>
union student
{
	char name[10];
	int marks[10][10];
}var1;
int main()
{
	int i,j;
	printf("Enter the name of the student");
	scanf("%s",var1.name);
	printf("Enter the marks of the students: ");
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&var1.marks[i][j]);
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			
			printf("Marks sub%d: ",var1.marks[i][j]);
		}
		printf("Name: %s",var1.name);
	}
	return 0;
}
