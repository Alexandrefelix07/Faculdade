
package errodetruncamento;
import java.text.NumberFormat;
import javax.swing.JOptionPane;


public class ErroDeTruncamento {
//Função para calcular fatorial  
    static double fat(double n) {
    double f=1;
    for(double i=1;i<=n;i++){
        f=f*i;
    }
    return f;
    }
    
public static void main(String[] args) {
//Inicio do código
double x = Double.parseDouble(JOptionPane.showInputDialog(null, "Digite o valor para x : "));
double erro = Double.parseDouble(JOptionPane.showInputDialog(null, "Digite o valor para o erro : "));
int cont=1,t=3;
double val1,val2=x,dif;
do{
    val1=val2;
    if(cont%2==1){
        val2=val1-Math.pow(x,t)/fat(t);
    }else{
        val2=val1+Math.pow(x,t)/fat(t);
    }  
    
dif=Math.abs(val1-val2);
System.out.println("Val2="+val2+" Val1="+val1+" cont="+cont+" t="+t);
cont++;
t=t+2;
}while(dif>erro);
System.out.println("Valor de seno(x)="+val2);

  



}


    
}
