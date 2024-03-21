#include <stdio.h>
int main()
{
	int y=0;
	char x[20];
	printf("\n digite uma palavra\n\n ");
	scanf("%s",&x);
	while (x[y]!='\0')
	{
		y++;
	}
	printf("\n a frase %s tem %d letras\n",x,y);
	return(0);
}
