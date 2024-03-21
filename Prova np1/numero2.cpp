#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 main(){
system("color 2B");
system("pause");


int idade,t,maior=0;	
char aux[30],nome[30];	
	

	for (t=0;t<5;t++){
		
	       	printf("\nInforme o nome  do %d aluno: ",t+1);
            scanf(" %[^\n]s",aux); 
            printf("\nInforme a idade do %s : ",aux);
            scanf("%d",&idade);
   	      if(idade >0){ 
            if(idade > maior){ 
                maior = idade; 
                  strcpy(nome,aux);
                         }	 	
                   }
           
}
 printf("\nO mais velho de todos e %s com a idade de %d anos \n",nome,maior);
   return 0;   	         
}
