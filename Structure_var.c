#include <stdio.h>
struct myStructure{
	int myNum;
	char myLetter;
}s1;
int main(){
//	struct myStucture s1;
	s1.myNum=45;
	s1.myLetter='V';
	printf("The number is: %d\n",s1.myNum);
	printf("The letter is: %c",s1.myLetter);
	return 0;
}
