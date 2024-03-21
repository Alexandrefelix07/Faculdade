#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
	int pedido,qtd;
	float vfinal;
printf("\t=======               LANCHONETE DO FELIX                   ===||\t");	
printf("\t=======   ESPECIFICACAO  ====||====  CODIGO ===||===  PRECO ===||\t");	
printf("\t======= CACHORRO QUENTE  ====||====   100   ===||===  1,20  ===||\t");	
printf("\t======= BAURU SIMPLES    ====||====   101   ===||===  1,30  ===||\t");	
printf("\t======= BAURU COM OVO    ====||====   102   ===||===  1,50  ===||\t");
printf("\t======= HAMBURGER        ====||====   103   ===||===  1,20  ===||\t");	
printf("\t======= CHEESEBURGER     ====||====   104   ===||===  1,30  ===||\t");
printf("\t======= REFRIGERANTE     ====||====   105   ===||===  1,00  ===||\t");	
inicio:	
printf("\n ESCOLHA O CODIGO DO PEDIDO: ");
scanf("%d",&pedido);	
printf("\n ESCOLHA A QUANTIDADE DO PEDIDO: ");
scanf("%d",&qtd);	
switch (pedido){
	case 100 :
		vfinal=qtd*1.20; break;
	case 101 :
		vfinal=qtd*1.30; break;
    case 102 :
		vfinal=qtd*1.50; break;
	case 103 :
		vfinal=qtd*1.20; break;
	case 104 :
		vfinal=qtd*1.30; break;
	case 105 :
		vfinal=qtd*1.20; break;
	default:
		printf("\n \t CODIGO INVALIDO \n");
 system ("pause");
 goto inicio;
}
printf("\n Seu pedido custara R$ %.2f  reais ",vfinal);	
return 0;	
}
