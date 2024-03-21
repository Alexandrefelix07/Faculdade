/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ecesao;

import javax.swing.JOptionPane;

/**
 *
 * @author alexa
 */
public class Ecesao {
    
    public static void main(String[] args) {
        
        int numerador = 5;
        int denominador = 0;
     
        
       
        try{
       
        JOptionPane.showMessageDialog(null,"Resultado da Divisao e : " + (numerador/denominador) ); 
        
        }catch (ArithmeticException ar){
        
        JOptionPane.showMessageDialog(null,"DIvisao por zero ");
        ar.printStackTrace();
        
        } catch(Exception erro){
            
         JOptionPane.showMessageDialog(null,"Excesao Generica ");
        
        
        }
    
        }
        
    
    
}
