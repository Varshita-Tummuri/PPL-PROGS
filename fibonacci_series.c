//0 1 1 2 3 5 8 
#include <stdio.h>
int main()
{
    int a=0,b=1,c,i=1;
    printf("%d\n%d\n",a,b);
    while(i<8)
    {
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
    i++;
    
    }
    return 0;
}
