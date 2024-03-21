#include <stdio.h>
int main()
{
	float preco,pa,pf;
	char produto[20];
	printf("\n Digite o nome do produto: ");
	scanf("%s",&produto);
	printf("\n Digite o preço do produto: ");
	scanf("%f",&preco);
		printf("\n Digite o percentual de aumento: ");
	scanf("%f",&pa);
	
	pf=preco+(preco*pa/100);
	
	printf("\n %s tem preço de venda final de R$ %.2f", produto, pf);
}

