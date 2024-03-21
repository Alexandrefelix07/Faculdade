#include <stdio.h>
#include <stdio.h>
int main()
{
	char nome[15];
	float preco, pfinal;
    printf(" Digite o nome e o preco do produto:\n ");
    scanf("%s%f",&nome,&preco);
    if(preco<10)
    {
    	pfinal=preco-(preco*0.05);
	}
	else
	{
		pfinal=preco-(preco*0.08);
	}
	printf(" O preco de %s com desconto e %f",nome, pfinal);
	return(0);
}
