#include <stdio.h>

int main()
{
	int count=0,i,vowel=0,consonents=0;
	char arr[10];
	printf("Enter a word:");
	for(i=0;i<10;i++)
	{
		scanf("%c",&arr[i]);
	}
	printf("The word is:");
	for(i=0;i<10;i++)
	{
		printf("%c",arr[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
		{
			vowel++;
		}
		else
		{
			consonents++;
		}
	}
	printf("The number of vowels in the string are %d\n",vowel);
	printf("The number of consonents in the string are %d",consonents);
	return 0;
}
