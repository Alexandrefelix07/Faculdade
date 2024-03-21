
import javax.swing.*;

public class Vetdinamico {
    public static void main(String args []){
        int tam;
        double Vetnotas[];
        tam=Integer.parseInt(JOptionPane.showInputDialog("Qual a Quantidades de Notas "));
        Vetnotas=new double [tam];
        
        double media=0;
        for (int i=0;i<tam;i++){
            Vetnotas[i]=Double.parseDouble(JOptionPane.showInputDialog("Digite a "+(i+1)+" A Nota"));
            media=media+Vetnotas[i];
            
        }
        media=media/tam;
        JOptionPane.showMessageDialog(null," A media das Notas e "+ media);
    }
}
