#include<stdio.h>
int main()
{
	int x,a,b,y,fac;
	int i=1;
	printf("*****MENU***** \n ");
	printf("1.FACTORIAL\n ");
	printf("2.EVEN/ODD \n ");
	printf("3.POSITIVE/NEGATIVE \n ");
	printf("4.SQUARE & CUBE \n ");
	
	printf("Enter a number for a specific operation:");
	scanf("%d",&x);
	
	printf("\n Enter a number:");
	scanf("%d",&y); 
	
		switch(x)
		{
			case 1:	while(i<y)
					{
						fac=y*i;
						i++;
						fac==y;
						
					}
					printf("The factorial is:%d",fac);
					break;
			case 2: if(y%2==0)
					{
						printf("The number is Even!");
					}
					else
					{
						printf("The number is Odd!");
					}
					break;
			case 3: if(y>0)
					{
						printf("The number is Positive!");
					}
					else
					{
						printf("The number is Negative!");
					}
					break;
			case 4: a=y*y;
					printf("The square of %d is %d\n",y,a);
					b=y*y*y;
					printf("The cube of %d is %d",y,b);
					break;
			default:printf("You entered a wrong choice!");
					break;
					
		}
	return 0;
}
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
				
						
