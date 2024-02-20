//factorial using function
int fac();
int main()
{
	
	int y=fac();
	printf("The factorial is %d",y);
	return 0;
}
int fac()
{
	int x,i,fac=1;
	printf("Enter a number to calculate its factorial:");
	scanf("%d",&x);
	for(i=2;i<=x;i++)
	{
		fac=fac*i;
	}
	return fac;
}
 
