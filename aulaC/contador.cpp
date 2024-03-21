#include <stdio.h>
#include <string.h>
int main()
{
	char frase[50];
	int cont=0;
	printf(" digite uma frase\n\n");
	gets(frase);
	cont=strlen(frase);
	while (frase[cont]=='\0')
	{
		cont--;
	}
	printf("\n A frase %s tem %d letras",frase,cont);
	return(0);
}
