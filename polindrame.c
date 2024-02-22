//show whether the number is polindrame or not
#include <stdio.h>
int main() {
    int x, y,a, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
	a=x;
    while (x != 0) 
	{	//x=123
        y = x % 10;//y=3
        temp = temp * 10 + y;//temp=3
        x = x / 10;//x
    }
    printf("The reverse of %d is: %d\n",a, temp);
    if(a==temp)
    {
    	printf("This number is a palindrome!");
	}
	else
	{
		printf("It is not a palindrome number.");
	}
    return 0;
}

