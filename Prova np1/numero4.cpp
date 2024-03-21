#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 main(){
int t,maiori=0, menori=200,numero;	
		for (t=0;t<50;t++){
            printf("\nInforme o %d valor ",t+1);
            scanf("%d",&numero);
  
         if(numero > maiori) {
             maiori= numero ;
                             }
         if(numero < menori) { 
              menori= numero ;
                             } 	      
                       }
printf("\nMenor valor: %d ",menori) ;
printf("\nMaior valor: %d ",maiori) ;
 return 0;   	         
}
