#include <stdio.h>
#include <stdlib.h>
int main( )
{
	int a,b,c;
	printf(" Entre com o valor do 1º lado do triangulo \n ");
	scanf("%d",&a);
	printf("\n Entre com o valor do 2º lado do triangulo \n ");
	scanf("%d",&b);
	printf("\n Entre com o valor do 3º lado do triangulo \n ");
	scanf("%d",&c);
	if((a==b)&&(b==c))
	printf("\n O triangulo e equilatero\n\n");
	else
	{
		if((a==b)||(a==c)||(b==c))
		printf("\n O triangulo e isoceles\n\n");
		else
		printf("\n O triangulo e escaleno\n\n");
	}
	system("PAUSE"); 
	return(0);
}
