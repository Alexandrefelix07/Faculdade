#include <stdio.h>
#include <stdlib.h>
int main()
{
	float nota=0,med=0;
    int x ;
	printf("\n==========Calculandor de Media=============\n ");
	for (x=0;x<4;x++){
		printf ("\nDigite a %d nota:",x+1,167);
		scanf("%f",&nota);
		med+=nota;
	}
 	printf("\nA media e %.2f \n",med/4);
	return 0;
}

