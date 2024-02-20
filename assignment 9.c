#include <stdio.h>

struct myStructure
 {
  char name[10];
  int rollnumber[5];
  int marks[5];
  int subject[5];
}s1;
int main()
{
	int a,i;
	printf("Enter the name of student:");
	scanf("%s",s1.name[10]);
	printf("Enter the Roll number:");
	scanf("%d",&s1.rollnumber[5]);
	printf("Enter the marks[5]:");
	scanf("%d",&s1.marks[5]);
	for (i=0;i<5;i++)
	{
		scanf("%d",&s1.marks[i]);
	}
	printf("\nRoll number:%d",s1.rollnumber);
	printf("\nname:%s",s1.name);
	for(i=0;i<5;i++)
	
	return 0;
}

