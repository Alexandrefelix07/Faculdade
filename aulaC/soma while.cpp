#include <stdio.h>
main()
{
	int num, soma;
	soma=0;
	printf("\n Digite o numero: ");
	scanf("%d",&num);
	while(num>=1)
	{
		soma=soma+num;
		printf("\n Digite o numero: ");
		scanf("%d",&num);
	}
	printf("\n A soma e %d",soma);
}
