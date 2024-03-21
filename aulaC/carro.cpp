#include <stdio.h>
#include <stdlib.h>
int main()
{
	char nome[10];
	double ctotal,cgasolina,calcool;
	printf("\n Informe o nome do carro e a capacidae do tanque:\n ");
	scanf("%[^\n]%lf",&nome,&ctotal);
	printf("\n Informe quantos KM o carro faz por litro de gasolina e de alcool:\n ");
	scanf("%lf%lf",&cgasolina,&calcool);
	cgasolina=ctotal*cgasolina;
	calcool=ctotal*calcool;
	printf("\n O %s possui autonomia de %.2lf KM com gasolina e %.2lf com alcool\n\n\n",nome,cgasolina,calcool);
	return(0);
}
