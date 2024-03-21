#include <stdio.h>
main()
{
	int i;
	double nota, media;
	media=0;
	for(i=1;i<=4;i++)
	{
		printf(" Nota do aluno: ");
		scanf("%lf",&nota);
		media=media+nota;
	}
	media=media/4;
	printf(" A media e %.2lf",media);
	return 0;
}
