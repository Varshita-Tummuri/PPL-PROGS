#include<stdio.h>
int main()

{ 
	int n,i,j,y;
	printf("Enter how many number of elements required : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("Enter an element from the array to find its l;argest and smallest: ");
	scanf("%d",&y);
	int smallest=arr[y];
	for(j=0;j<n;j++)
	{
		if(arr[j]<smallest)
		{
			smallest=arr[j];
		}
	}
int largest=arr[y];
	for(j=0;j<n;j++)
	{
		if(arr[j]>=largest)
		{
			largest=arr[j];
		}
	}
	printf("Element Larger than %d is %d",y,largest);
	printf("\nElement Smaller than %d is %d",y,smallest);
	return 0;
}
