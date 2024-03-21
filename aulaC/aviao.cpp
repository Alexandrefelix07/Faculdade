#include <stdio.h>
#include <stdlib.h>
int main()
{
	char nome[10];
	int nassentos,pvendidos,nvendidos;
	double vpassagem,varrecadado,narrecadado;
	printf("\n Informe o nome do aviao:\n ");
	scanf("%[^\n]",&nome);
	printf("\n Informe o numero de assentos:\n ");
	scanf("%d",&nassentos);
	printf("\n Informe o valor da passagem:\n ");
	scanf("%lf",&vpassagem);
	printf("\n Informe o numero de passagens vendidas:\n ");
	scanf("%d",&pvendidos);
	varrecadado=pvendidos*vpassagem;
	nvendidos=nassentos-pvendidos;
	narrecadado=nvendidos*vpassagem;
    printf("\n O %s arrecadou %.2lf R$ com %d passagens vendidas e deixou de arrecadar %lf com %d passagens nao vendidas\n\n",nome,varrecadado,pvendidos,narrecadado,nvendidos);
	return(0);	
}
