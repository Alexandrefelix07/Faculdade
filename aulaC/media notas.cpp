#include <stdio.h>
int main()
{
	char nome[20];
	float p1, p2, media;
	
	
	printf(" Digite o nome do aluno\n ");
	scanf("%s",&nome);
	printf("\n Digite as duas notas de %s\n ",nome);
	scanf("%f%f",&p1,&p2);
	media=(p1+p2)/2;
	if(media>=7)
	{
		printf(" %s aprovado com media %.1f\n",nome,media);
	}
	else
	if(media<7 && media>=4)
	{
		printf("\n %s esta de recuperacao com media %.1f\n",nome, media);
	}
	else
	{
		printf("\n %s reprovado com media %.1f\n\n\n",nome, media);
	}
	return(0);
}
