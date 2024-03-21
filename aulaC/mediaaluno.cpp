#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[20];
	float p1,p2,media;
	
	printf("Digite o Nome do aluno: ");
	scanf("%[^\n]",&nome);
	printf("Informe a Primeira nota: ");
	scanf("%f",&p1);
	printf("Informe a Segunda nota: ");
	scanf("%f",&p2);
	media=(p1+p2)/2;
	
	if (media>7){
		printf("O Aluno %s ESTA APROVADO com Media %.1lf Passou Direto",nome,media);
	}
	
	if (media<=7 && media>=4) {
		
		printf("O Aluno %s ESTA DE RECUPERACAO  com Media %.1lf ",nome,media);
	}
	else if  (media<4) {
		printf("O Aluno %s REPROVADO com Media %.1lf ",nome,media);
	}
	
return(0);	
}
