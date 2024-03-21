
package erroexp;
import java.text.NumberFormat;
import javax.swing.JOptionPane;

public class ErroExp {
static double fat(double n) {
    double f=1;
    for(double i=1;i<=n;i++){
        f=f*i;
    }
    return f;
    }

 
public static void main(String[] args) {
double e = Double.parseDouble(JOptionPane.showInputDialog(null, "Digite o valor da exponencial : "));
double erro = Double.parseDouble(JOptionPane.showInputDialog(null, "Digite o valor para o erro : "));
int t=1;
double val1,val2=1,dif,exp;
do{
        val1=val2;
        exp=Math.pow(e,t)/fat(t);
        val2=val1+Math.pow(e,t)/fat(t);  
    
dif=Math.abs(val1-val2);
System.out.println("Val2="+val2+" Val1="+val1+" t="+t+" Exp= "+exp);
t++;
}while(dif>erro);
NumberFormat z = NumberFormat.getIntegerInstance();


System.out.println("Valor da Exponencial= "+z.format(val2));
    }
    
}
