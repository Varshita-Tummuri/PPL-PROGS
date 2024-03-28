#include <stdio.h>
#include <string.h>
int main()
{
	char arr[50];
	int i,count1=0,count2=0,count3=0;
	printf("Enter a string: ");
	for(i=0;i<10;i++)
	{
		scanf("%c",&arr[i]);
	}
	for(i=0;i<=strlen(arr);i++)
	{
		if(arr[i]>=97 && arr[i]<=122)//lowercase
		{
			count1++;
		}
		else if(arr[i]>=65 && arr[i]<=90)//uppercase
		{
			count2++;
		}
		else if(arr[i]>=33 && arr[i]<=47 || arr[i]>=58 && arr[i]<=64)//special characters
		{
			count3++;
		}
	}
	printf("The Count of Lowercase are: %d",count1);
	printf("\nThe Count of Uppercase are: %d",count2);
	printf("\nThe Count of Special Characters are: %d",count3);

}
