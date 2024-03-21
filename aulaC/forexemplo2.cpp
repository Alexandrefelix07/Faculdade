#include <stdio.h>
#include <stdlib.h>
 main(){
 	int i,x;
 	double nota,media,mediaf;
 	media=0;
 	for(i=1;i<=10;i++){
 		printf("\n Nota do aluno %i",i);
 		scanf("%lf",&nota);
 		media=media+nota;
 		
	 }
	 x=media;
 	mediaf=x/10;
 	printf("\nmedia todal %.1lf:",mediaf);
 
 }

