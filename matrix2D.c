#include<stdio.h>
int main()
{
	int i,j,c,r;
	int a[10][10];
	printf("Enter the row size:");
	scanf("%d",&r);
	printf("\nEnter the column size:");
	scanf("%d",&c);
	printf("\nEnter the elements of the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	
	printf("The elements of the matrix are: %d",a[i][j]);
	return 0;
}
