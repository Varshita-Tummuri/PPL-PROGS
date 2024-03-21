//compute sum of even and odd nos in an array
#include <stdio.h>
int main()
{
	int arr[10];
	int n,i,sum1=0,sum2=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			sum1=sum1+arr[i];
		}
		else
		{
			sum2=sum2+arr[i];
		}
	}
	printf("Sum of even elemnts is %d  ",sum1);
	printf("\nSum of odd elements is %d  ",sum2);
	return 0;
}
