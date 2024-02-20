#include<stdio.h>
int main()

{ 
	int n,i,j;
	printf("Enter how many number of elements required : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}	
	int largest=arr[0];
	for(j=1;j<n;j++)
	{
		if(arr[j]>=largest)
		{
			largest=arr[j];
		}
	}
	printf("Largest element of array is : %d",largest);
	return 0;
}
