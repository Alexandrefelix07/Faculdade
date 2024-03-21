package agendaprog;

import javax.swing.*;
import java.util.*;

public class Agenda {

    public static void main(String[] args) {
        ArrayList<Pessoa>listaagenda = new ArrayList<Pessoa>();
        int opcao = 0;
        do{
            opcao = Integer.parseInt(JOptionPane.showInputDialog(null, "Menu\n 1-Incluir Pessoa"
                                        + "\n2 - Listar Pessoas\n3 - Listar por nome"
                                        + "\n4 - Alterar por nome\n5 - Excluir por nome"
                                        + "\n6 - Adicionar nome em determinada posição"
                                        + "\n8 - Sair", "Agenda",0));

            if(opcao==1){
                Pessoa p = new Pessoa();
                p.leDados();
                listaagenda.add(p);
            }
            if(opcao==2){
                int numpessoa=listaagenda.size();
                for(int i=0;i<numpessoa;i++){
                    Pessoa p = new Pessoa();
                    p = listaagenda.get(i);
                    p.mostrarDados();
                }
            }
            //Listar por nome
            if(opcao==3){
                String q;
                q = JOptionPane.showInputDialog("Digite o nome da pessoa a ser procurado ");  
                int numpessoa=listaagenda.size();
                for(int i=0; i< numpessoa; i++){ 
                    
                     if(q.compareToIgnoreCase(listaagenda.get(i).nome)==0){
                         Pessoa p = new Pessoa();
                         p = listaagenda.get(i);
                         p.mostrarDados();
                         break;
                     }                         
                 }          
            }
            //Alterar por nome
            if(opcao==4){
                String q;
                q = JOptionPane.showInputDialog("Digite o nome da pessoa a ser procurado ");  
                int numpessoa=listaagenda.size();
                for(int i=0; i <= numpessoa; i++){  
                     if(q.compareToIgnoreCase(listaagenda.get(i).nome)==0){
                         Pessoa p = new Pessoa();                         
                         p.leDados();
                         listaagenda.set(i, p);
                         break;               
                     }
                }                
            }
            //Excluir por nome
            if(opcao==5){
                String q;
                q = JOptionPane.showInputDialog("Digite o nome da pessoa a ser procurado ");  
                int numpessoa=listaagenda.size();
                for(int i=0; i<= numpessoa; i++){  
                     if(q.compareToIgnoreCase(listaagenda.get(i).nome)==0){
                         Pessoa p = new Pessoa();
                         listaagenda.remove(i);
                         break;
                     }
                }
            }
            //Adicionar um nome em uma posição desejada
            if(opcao==6){
                int posicao;
                posicao = Integer.parseInt(JOptionPane.showInputDialog(null, 
                                        "Digite a posição para armazenar") );
                Pessoa p = new Pessoa();
                p.leDados();
                if(posicao > listaagenda.size()+1){
                posicao = listaagenda.size()+1;
                listaagenda.add(posicao , p);
                }
                else{
                    listaagenda.add(posicao , p);
                }
            }
        }while(opcao!=8);
    }    
}