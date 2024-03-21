#include <stdio.h>
#include <stdlib.h>
int main()
{   
	int a, b, c,x;
	
	printf(" Digite os valor de A:");
	scanf("%d",&a);
	printf(" Digite os valor de B:");
	scanf("%d",&b);
	printf(" Digite os valor de C:");
	scanf("%d",&c);\
	x=a;
	
	if (x<b)
	{
        	x=b;
	}
	 if  (x<c)
		   
	{
           x=c;
	}

		printf("O valor de X e: %d ",x);
	
	
		
		
return(0);
}
