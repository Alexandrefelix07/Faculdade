/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package palitoserver;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

/**
 *
 * @author fernando
 */
public class Jogador {
    private String nome;
    private ObjectOutputStream saida;
    private ObjectInputStream  entrada;
    private int apostaPalitoAtual;
    private int apostaMesaAtual;
    private int palitosTotal=3;

    public Jogador() { }

    public int getApostaMesaAtual() {
        return apostaMesaAtual;
    }

    public void setApostaMesaAtual(int apostaMesaAtual) {
        this.apostaMesaAtual = apostaMesaAtual;
    }

    public int getApostaPalitoAtual() {

        return apostaPalitoAtual;
    }

    public void setApostaPalitoAtual(int apostaPalitoAtual) {
        this.apostaPalitoAtual = apostaPalitoAtual;
    }



    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getPalitosTotal() {
        return palitosTotal;
    }

    public void setPalitosTotal(int palitosTotal) {
        this.palitosTotal = palitosTotal;
    }

    public ObjectInputStream getEntrada() {
        return entrada;
    }

    public void setEntrada(ObjectInputStream entrada) {
        this.entrada = entrada;
    }

    public ObjectOutputStream getSaida() {
        return saida;
    }

    public void setSaida(ObjectOutputStream saida) {
        this.saida = saida;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final Jogador other = (Jogador) obj;
        if ((this.nome == null) ? (other.nome != null) : !this.nome.equals(other.nome)) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode() {
        int hash = 5;
        return hash;
    }

    /*
     * Decrementa um palito
     * */
    public void tirarPalito(){
        this.palitosTotal--;
    }





}

