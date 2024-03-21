#include <stdio.h>
int main()
{
	int i,n,j,k,x,y;
	int m[10][10];
	printf("How many students are there in the class?");
	scanf("%d",&n);
	char names[n];
	/*printf("\nEnter the names of the students: ");
	for(i=0;i<n;i++)
	{
		scanf("%s",&names[i]);
	}
	/*for(j=0;j<n;j++)
	{
		printf("Heloo");
		printf("%s",names[j]);
	}*/
	printf("How many subjects are there?");
	scanf("%d",&y);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=y;j++)
		{
			printf("Enter marks of Student %d Subject %d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=y;j++)
		{
			printf("Marks of Student %d Subject %d: %d",i,j,m[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=y;j++)
		{
			
		}
	}
	
	return 0;
}
