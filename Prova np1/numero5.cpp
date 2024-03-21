#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char sexo;
int idade, contg=0, contf=0, maiori=0, menori=200 ;
float salario,Mgrupo ;

while (salario > 0) {

printf("Qual a idade do entrevistado: ");
scanf("%d",&idade); 
if(idade <0)break; 
printf("Sexo<M/F>: ");
scanf("%s",&sexo);
printf("Salario: R$");
scanf("%f",&salario);

if (salario > 0 ) {

Mgrupo= Mgrupo + salario; 
 contg=contg +1; 
}
if(idade > maiori) {
maiori= idade ;
}
if(idade < menori) { 
menori= idade ;
}
if ((sexo =='f') && (salario <=100)) {
contf=contf + 1 ;
}
}
printf("\nMedia dos salarios do grupo: R$: %.0lf ",Mgrupo/contg) ;
printf("\nMenor idade: %d anos",menori) ;
printf("\nMaior idade: %d anos",maiori) ;
printf("\nA quantidade de mulheres com salario ate R$ 100,00 foi de %d: ",contf);
return 0;
}
