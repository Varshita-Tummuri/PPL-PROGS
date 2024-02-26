#include <stdio.h>
int main()
{
	int count,i;
	char a[10];
	printf("Enter a word: ");
	scanf("%s",a);
	for(i=0;i<10;i++)
	{
		printf("%c\n",a[i]);
		if(a[i]!=0)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	printf("The length of the string is: %d",count);
	return 0;
}
