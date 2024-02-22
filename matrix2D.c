#include<stdio.h>
int main()
{
	int i,j,c,r;
	int a[10][10];
	printf("Enter the row size:");
	scanf("%d",&r);
	printf("Enter the column size:");
	scanf("%d",&c);
	printf("Enter the elements of the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("The elments of the matrix are: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
