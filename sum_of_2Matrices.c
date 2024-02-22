/*2D arrays*/
#include<stdio.h>
int main()
{
	int r,c,i,j,x,y,v,t;
	int a[10][10];
	int b[10][10];
	int s[10][10];
	printf("Enter row size:");
	scanf("%d",&r);
	printf("\nEnter column size:");
	scanf("%d",&c);
	printf("\nEnter the elemnts for matrix 1:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements for matrix 2:");
	for(x=0;x<r;x++)
	{
		for(y=0;y<c;y++)
		{
			scanf("%d",&b[x][y]);
		}
	}
	/*for(v=0;v<r;v++)
	{
		for(t=0;t<c;t++)
		{
		
		}
	}*/
	
	printf("%d",a[i][j]);
	return 0;
	
}
