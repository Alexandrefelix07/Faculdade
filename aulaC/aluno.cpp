#include <stdio.h>
#include <stdlib.h>
int main()
{
	float med1,med2,medf;
	char Aluno[20];
	printf("\n Digite o nome do Aluno: ");
	scanf("%s",&Aluno);
	printf("\n Digite a 1 nota: ");
	scanf("%f",&med1);
	printf("\n Digite a 2 nota: ");
	scanf("%f",&med2);
	
	medf=(med1+med2)/2;
	if(medf>=7)
	{printf("\n O aluno %s esta Aprovado com media %.1f",Aluno,medf);}
	else
	{printf("\n O aluno %s esta Reprovado com media %.1f.\n ",Aluno,medf);
	}
	return 0;
}

