#include <stdio.h>
struct student
{
	int rollno;
	int marks[5];
	char name[10];
}s1;

int main()
{
	int i,j;
	for(j=0;j<10;j++)
	{
		printf("\nEnter the student roll number:");
		scanf("%d",&s1.rollno);
		printf("\nEnter the student name: ");
		scanf("%s",&s1.name[5]);
		printf("\nEnter the marks of the subject: ");
		for(i=0;i<5;i++)
		{
			scanf("%d",&s1.marks[i]);	
		}
		printf("\nRoll no.:%d",s1.rollno);	
		printf("\nName: %s",s1.name[5]);
		for(i=0;i<5;i++)
		{
			printf("\nMarks: %d",s1.marks[i]);
		}	
	}
}
