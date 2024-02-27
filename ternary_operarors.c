 #include <stdio.h>
 int main()
 {
 	int m,n;
 	printf("Enter two numbers: ");
 	scanf("%d%d",&m,&n);
 	(m>n)?printf("%d > %d",m,n):printf("%d < %d",m,n);
 	return 0;
 }
