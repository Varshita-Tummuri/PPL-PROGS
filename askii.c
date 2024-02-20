//print askii values for a character taken from user
#include<stdio.h>
int main()
{
	char ch;
	int res;
	printf("Enter a Character:");
	scanf("%c",&ch);
	res=(int)ch;
	printf("The askii value of %c is %d",ch,res);
	return 0;
}
