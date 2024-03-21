#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
 	int cad1=0,cad2=0,cad3=0,cad4=0,vnulo=0,vbranco=0,cod,c;
    system("color 2E");
	
printf("\t=======               URNA ELETRONICA            ===||\n");	
printf("\t=======   NOME DO CANDIDATO   ====||====  CODIGO ===|| \n");	
printf("\t======= DILMA                 ====||====   1     ===|| \n");	
printf("\t======= AERCIO NEVES          ====||====   2     ===|| \n");	
printf("\t======= ALEXANDRE             ====||====   3     ===|| \n");
printf("\t======= MARINA                ====||====   4     ===|| \n");
printf("\t======= VOTO EM BRANCO        ====||====   5     ===|| \n");
printf("\t======= VOTO NULO             ====||====   6     ===|| \n");
printf("\t======= PARA FINALIZAR        ====||====   0     ===|| \n");

while (cod>=1)
{
inicio:	
printf("\n Digite o codigo do seu %d candidato: ",c+1);
scanf("%d",&cod);
if(cod == 0)break;
c++;
if(cod==1)
{
	cad1=cad1+1;
}
if(cod==2)
{
	cad2=cad2+1;
}
if(cod==3)
{
	cad3=cad3+1;
}
if(cod==4)
{
	cad4=cad4+1;
}
if(cod==5)
{
	vbranco=vbranco+1;
}
if(cod>=6)
{
	vnulo=vnulo+1;
}
}
printf("\n\n");
printf("\t=====                RESULTADO DAS APURACOES              ===||\n");
printf("\t======= DILMA                 ====||====    %d votos      ===|| \n",cad1);	
printf("\t======= AERCIO NEVES          ====||====    %d votos      ===|| \n",cad2);	  
printf("\t======= ALEXANDRE             ====||====    %d votos      ===|| \n",cad3);
printf("\t======= MARINA                ====||====    %d votos      ===|| \n",cad4);
printf("\t======= VOTO EM BRANCO        ====||====    %d votos      ===|| \n",vbranco);
printf("\t======= VOTO NULO             ====||====    %d votos      ===|| \n",vnulo);
return 0;
}
