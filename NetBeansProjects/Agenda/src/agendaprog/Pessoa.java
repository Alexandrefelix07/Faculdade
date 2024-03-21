package agendaprog;

import javax.swing.*;

public class Pessoa {
    public String nome;
    public int idade;
    public String enderesso;
    public String email;
    
    public void leDados(){
        nome = JOptionPane.showInputDialog(null,"Digite o nome:");
        idade = Integer.parseInt(JOptionPane.showInputDialog(null,"Digite a idade"));
        enderesso = JOptionPane.showInputDialog(null,"Digite o enderesso");
        email = JOptionPane.showInputDialog(null,"Digite o e-mail");
    }    
    public void setSubstituiDados(){
        nome = JOptionPane.showInputDialog(null,"Digite o novo nome:");
        idade = Integer.parseInt(JOptionPane.showInputDialog(null,"Digite a nova idade"));
        enderesso = JOptionPane.showInputDialog(null,"Digite o novo enderesso");
        email = JOptionPane.showInputDialog(null,"Digite o novo e-mail");        
    }
    public void mostrarDados(){
        JOptionPane.showMessageDialog(null,"Nome: "+nome + "Idade: "+idade
                                    +"enderesso: "+enderesso +"E-mail: "+email );
    }
    
}
