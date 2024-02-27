//sum of two matrices
#include<stdio.h>
int main()
{
	int i,j,r,c;
	int a[10][10];
	int b[10][10];
	int s[10][10];
	printf("Enter row size:");
	scanf("%d",&r);
	printf("Enter column size:");
	scanf("%d",&c);
	
	printf("\nEnter the elemnts for matrix 1:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe elemnts for matrix 1 are: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter the elements for matrix 2:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe elemnts for matrix 2 are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
//for sum of the matrices
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\nThe sum of the two matrices is:\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
	return 0;

}
