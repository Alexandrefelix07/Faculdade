#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   
	float a, b, c, x1, x2, delta;
	printf(" Digite os valor de A:");
	scanf("%f",&a);
	printf(" Digite os valor de B:");
	scanf("%f",&b);
	printf(" Digite os valor de C:");
	scanf("%f",&c);
	
	
	if(a==0)
	{
		printf("\n Nao e equacao do segundo grau");
	}
	else
	{
		delta=pow(b,2)-4*a*c;
		if(delta<0)
		{
			printf(" Nao rexiste raizes reais");
		}
		else
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("\n x1=%f e x2=%f",x1,x2);
		}
	}
return(0);
}
