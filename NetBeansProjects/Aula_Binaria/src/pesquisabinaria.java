
import java.util.*;
import java.text.*;


public class pesquisabinaria {
    
 static int pesqbinaria(int vet[], int tam, int val){
      int inicio=0,fim=tam-1;
      int pos=-1;
      do{
          int meio=(int)((fim+inicio)/2);
          if(vet[meio]==val){
            pos=meio;
            return pos;
          }
          if(val>vet[meio]){
              inicio=meio+1;
          }
          else{
              fim=meio-1;
          }          
      }while(inicio<=fim);
      return pos;
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int vet[];
        int tam, val;
        Scanner in = new Scanner(System.in);
        //leitura do tamanho do vetor
        System.out.println("Digite o tamanho do vetor:");
        tam=in.nextInt();
        //alocacao dinamica do vetor
        vet=new int[tam];
        //preenche o vetor com elementos
        for(int i=0;i<tam;i++){
           System.out.println("Digite o "+(i+1)+"o. valor do vetor:");
           vet[i]=in.nextInt(); 
        }
        System.out.println("\n\nDigite o valor a ser pesquisado no vetor:");
        val=in.nextInt();
        
        double tempoinic=System.nanoTime();
        int encontrado=pesqbinaria(vet,tam,val);
        double tempofim=System.nanoTime();
        //calcula o tempo de execucao em segundos
        double tempoexecucao=(double)((tempofim-tempoinic)/1000000000.0);
        
        NumberFormat nf = NumberFormat.getNumberInstance();
        nf.setMaximumFractionDigits(10);
        System.out.println("Tempo de execução em segs:"+nf.format(tempoexecucao));
        
        if(encontrado!=-1){
            System.out.println(val+" encontrado na posição "+encontrado+" do vetor");
        }
        else{
            System.out.println(val+" não encontrado");
        }      
    }
    
}