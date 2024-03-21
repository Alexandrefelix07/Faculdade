#include <iostream>
#include <stdio.h>



int main() {
	char func [100];
	double sbruto,descinss,descir, sliqui,descinss1,descir1;
	
	
	printf("Digite o nome do funcionario TREVO DA SORTE: ");
	scanf("%s",&func);
	printf("Digite o salario bruto: ");
	scanf("%lf",&sbruto);
	printf("Digite o percentual de desconto do INSS:  ");
	scanf("%lf",&descinss);
	printf("Digite o percentual de desconto do IR:  ");
	scanf("%lf",&descir);
	
	descir1=sbruto*descir/100;
	
	descinss1=sbruto*descinss/100;
	sliqui=sbruto-descinss1-descir1;
	
	printf("\n O salario liquido de %s e de %.2lf",func,sliqui);
	
	

	
}
