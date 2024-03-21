#include <stdio.h>
#include <stdlib.h>
int main( )
{
double litr1,alt,comp,areap,litr2,L1,Qt;

printf("Informa quantos litros tem a lata de tinta ?\n");
scanf("%lf",&litr1);
printf("Informa a Altura e a Largura da parede:");
scanf("%lf\n%lf",&alt,&comp);
printf("Quantos litros Pintam 1 metro: ");	
scanf("\n%lf",&litr2);

areap=(alt*comp);
L1=(litr1/litr2);

Qt=areap/L1;

printf("Sao Nescesario %.1f Latas Para pintar a Parede de %.1f metros² " ,Qt,areap);


return(0);
	
	
	
	
	
	
	
}
