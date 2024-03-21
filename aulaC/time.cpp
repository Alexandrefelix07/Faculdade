#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	
	printf("  \n                        ===== TIMAO VASCO SANTOS MENGO =====\n\n\n\n");
	printf("            DIGETE 3 VALORES PARA SABER QUAL TIME SERA CAMPEAO\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a<b+c && b<a+c && c<a+b) 
	{
		if(a==b && b==c)
		{
			printf("\nTIMAO CAMPEAO");
		}
	    	else 
	    {
		          
				    if (a==b || a==c || c==b)
	               printf("\nSANTOS CAMPEAO");
		
		          else{	
				  
				   printf("\nMENGO CAMPEAO");
		          	
		          	
				      }
		
		        
		}
		
	}
 else
{
	printf("\nVASCO CAMPEAO");
	
}	
return(0);
}

