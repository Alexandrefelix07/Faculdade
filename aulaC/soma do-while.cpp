#include <stdio.h>
#include <stdlib.h>
main()
{
	int soma, num;
	soma=0;
	do
	{
	printf(" Informe um valor: ");
	scanf("%d",&num);
	soma=soma+num;
    }while(num>=0);
    printf(" A soma e %d",soma);
}
