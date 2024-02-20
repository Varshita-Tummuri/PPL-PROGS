/*2D arrays*/
#include<stdio.h>
int main()
{
	int r,c,i,j;
	int a[10][10];
	printf("Enter row size:");
	scanf("%d",&r);
	printf("\nEnter column size:");
	scanf("%d",&c);
	printf("\nEnter the elemnts:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n%d",a[i][j]);
	return 0;
	
}
