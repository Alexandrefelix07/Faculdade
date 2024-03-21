#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 char nome[100], sexo[1];
 float altura,peso;
main(){
 printf("Informe O nome da pessoa :" );
 gets(nome);
 printf("Digite M para masculino e F para feminino:\n");
 gets(sexo);
  printf("\nDigite a altura da pessoa:");
 scanf("%f",&altura);
 //strcpy(sexo,strupr(sexo));/*comando para transforma uma string em maiuscula
 								//strpy copia uma estring na outra
                               //strcmp compara a estrig e se for igual retorna como 0                      */
 if (strcmp(sexo,"M")==0){
 peso=58-(72.7*altura);
 
 }
 if(strcmp(sexo,"F")==0){
 	peso=(62.1*altura)-44.7;
 	
 }
 printf("\t O peso de %s e %d ",nome,peso );
 



}

