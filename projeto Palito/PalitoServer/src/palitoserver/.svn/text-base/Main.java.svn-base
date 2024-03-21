/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package palitoserver;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.HashMap;
import java.util.Vector;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author fernando
 */
public class Main {

    private ServerSocket socketServer;
    private int quantidadeJogadores = 0;
    private Vector<Jogador> jogadores = new Vector<Jogador>();
    //Guarda a verdadeira aposta da mesa     
    private int apostaMesaAtual = 0;
    private Jogador vencedor;
    private Jogador vencedorAtual;
    private Vector<String> aposta = new Vector<String>();

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Main aplicativo = new Main();

    }

    private void AdicionarJogador(Socket socket) {
        try {
            Jogador jogador = new Jogador();

            ObjectOutputStream saida = new ObjectOutputStream(socket.getOutputStream());
            ObjectInputStream entrada = new ObjectInputStream(socket.getInputStream());

            jogador.setSaida(saida);
            jogador.setEntrada(entrada);
            jogador.setApostaMesaAtual(-1);

            HashMap<String, String> dadosEscrita = new HashMap<String, String>();
            HashMap<String, String> dadosLeitura = new HashMap<String, String>();


            dadosEscrita.put("estado", "");
            dadosEscrita.put("mensagem", "Bem vindo ");
            jogador.getSaida().writeObject(dadosEscrita);
            jogador.getSaida().flush();
            jogador.getEntrada().readObject();
            jogadores.add(jogador);
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        }

    }

    public boolean pertenceAoJogo(Jogador jogador) {
        for (Jogador j : jogadores) {
            if (jogador.equals(j)) {
                return true;
            }
        }
        return false;
    }

    /*
     * Verifica se algum jogado acertou
     * a aposta da mesa atual, caso
     * tenha acertada irá diminuir
     * um palito
     *
     * */
    private boolean checarAcertoJogado() {
        for (Jogador j : jogadores) {
            if (j.getApostaMesaAtual() == this.apostaMesaAtual) {
                j.tirarPalito();
                System.out.println("#######################################################");
                System.out.println("O jogador " + j.getNome() + " acertou, ele possui " + j.getPalitosTotal() + " palitos");
                System.out.println("#######################################################");
                vencedorAtual = j;
                return true;
            }

        }
        return false;

    }

    /*
     * Verifica se algum jogador não tem nenhum
     * ponto, caso tenha irá terminar o jogo
     *
     * */
    private boolean verificarGanhador() {
        for (Jogador j : jogadores) {
            if (j.getPalitosTotal() == 0) {
                vencedor = j;
                return true;
            }
        }
        return false;

    }
    /*
     * Zera as apostas do jogadores
     * */

    private void zerarApostas() {
        for (Jogador j : jogadores) {
            j.setApostaMesaAtual(-1);
        }

    }

    public Main() {
        try {
            socketServer = new ServerSocket(2222);

            principal:
            while (true) {

                switch (quantidadeJogadores) {
                    case 0: {
                        System.out.println("aguardando jogador");
                        Socket socket = socketServer.accept();
                        AdicionarJogador(socket);
                        System.out.println("jogador1");
                        quantidadeJogadores++;
                        break;
                    }
                    case 1: {
                        System.out.println("aguardando jogador");
                        Socket socket = socketServer.accept();
                        AdicionarJogador(socket);
                        System.out.println("jogador2");
                        quantidadeJogadores++;
                        break;
                    }
                    case 2: {
                        System.out.println("aguardando jogador");
                        Socket socket = socketServer.accept();
                        AdicionarJogador(socket);
                        System.out.println("jogador3");
                        quantidadeJogadores++;
                        break;
                    }
                    case 3: {
                        apostaMesaAtual = 0;
                        this.vencedorAtual = new Jogador();
                        HashMap<String, String> dadosSaida = new HashMap<String, String>();
                        HashMap<String, String> dadosEntrada = new HashMap<String, String>();

                        /*
                         * pega as apostas de palitos
                         * */

                        for (Jogador j : jogadores) {

                            dadosSaida = new HashMap<String, String>();
                            dadosSaida.put("mensagem", "O jogo começou");
                            dadosSaida.put("estado", "jogando");
                            dadosSaida.put("tipoAposta", "palito");

                            /*
                             * do while que verifica se o jagador esta colocando
                             * na mesa uma quantidade de palito menor ou igual
                             * ao valor que ele tem
                             * */
                            do {
                                j.getSaida().writeObject(dadosSaida);
                                j.getSaida().flush();
                                System.out.println("palitos");
                                dadosEntrada = (HashMap<String, String>) j.getEntrada().readObject();

                                if (Integer.parseInt(dadosEntrada.get("apostaPalito")) > j.getPalitosTotal()) {
                                    dadosSaida = new HashMap<String, String>();
                                    dadosSaida.put("mensagem", "Você só tem " + j.getPalitosTotal() + " palito");
                                    dadosSaida.put("estado", "jogando");
                                    dadosSaida.put("tipoAposta", "palito");
                                }

                            } while (Integer.parseInt(dadosEntrada.get("apostaPalito")) > j.getPalitosTotal());

                            System.out.println("Jogador " + dadosEntrada.get("nome") + " apostou " + dadosEntrada.get("apostaPalito"));
                            j.setNome(dadosEntrada.get("nome"));
                            j.setApostaPalitoAtual(Integer.parseInt(dadosEntrada.get("apostaPalito")));

                            this.apostaMesaAtual = apostaMesaAtual + Integer.parseInt(dadosEntrada.get("apostaPalito"));
                        }

                        System.out.println("total palito: " + apostaMesaAtual);

                        /*
                         * pega as apostas da mesa
                         * */

                        for (Jogador j : jogadores) {

                            dadosSaida = new HashMap<String, String>();
                            dadosSaida.put("mensagem", " ");
                            dadosSaida.put("estado", "jogando");
                            dadosSaida.put("tipoAposta", "mesa");

                            /*
                             * do while que verifica se a aposta ja existe
                             * */
                            do {
                                j.getSaida().writeObject(dadosSaida);
                                System.out.println("aposta");
                                dadosEntrada = (HashMap<String, String>) j.getEntrada().readObject();

                                /*
                                 * for que pega as apostas dos jogadores e
                                 * salva em um vetor
                                 * */
                                for (Jogador x : jogadores) {
                                    aposta.add(String.valueOf(x.getApostaMesaAtual()));
                                }
                               
                                if (aposta.contains(dadosEntrada.get("apostaMesa"))) {
                                    dadosSaida = new HashMap<String, String>();
                                    dadosSaida.put("mensagem", "Já exite essa aposta");
                                    dadosSaida.put("estado", "jogando");
                                    dadosSaida.put("tipoAposta", "mesa");
                                }

                            } while (aposta.contains(dadosEntrada.get("apostaMesa")));

                            aposta.removeAllElements();
                            System.out.println("Jogador " + dadosEntrada.get("nome") + " apostou na mesa " + dadosEntrada.get("apostaMesa"));
                            j.setNome(dadosEntrada.get("nome"));
                            j.setApostaMesaAtual(Integer.parseInt(dadosEntrada.get("apostaMesa")));
                            /*
                             * for que envia uma mensagem para todos os jogadores
                             * avisando o valor das aposta 
                             * */
                           for (Jogador y : jogadores) {

                                System.out.println(y.getNome());
                                dadosSaida = new HashMap<String, String>();
                                dadosSaida.put("mensagem", j.getNome()+" apostou "+j.getApostaMesaAtual());
                                dadosSaida.put("estado", " ");
                                dadosSaida.put("tipoAposta", "resultado");
                                 y.getSaida().writeObject(dadosSaida);
                                 y.getSaida().flush();
                                 dadosEntrada = (HashMap<String, String>) y.getEntrada().readObject();
                            }
                        }

                        dadosSaida = new HashMap<String, String>();
                        dadosSaida.put("estado", "jogando");


                        String resultado = "Quantidade de palitos na mesa: " + this.apostaMesaAtual;
                        if (this.checarAcertoJogado()) {
                            resultado = resultado + "\n" + "O jogador " + vencedorAtual.getNome() + " acertou";
                        } else {
                            resultado = resultado + "\n" + "Ninguem acertou";
                        }
                        if (verificarGanhador()) {
                            resultado = resultado + "\n" + "O jogador " + this.vencedor.getNome() + " ganhou ";
                            quantidadeJogadores++;
                        }

                        dadosSaida.put("mensagem", resultado);

                        /*
                         * mostra o resultado para todos os jogadores
                         * na mesa 
                         * */

                        for (Jogador j : jogadores) {
                            System.out.println("loop resultado");
                            dadosSaida.put("tipoAposta", "resultado");
                            j.getSaida().writeObject(dadosSaida);
                            System.out.println("resultado");
                            dadosEntrada = (HashMap<String, String>) j.getEntrada().readObject();
                        }

                        /*
                         * limpa as aposta
                         * */
                        this.zerarApostas();
                        break;
                    }
                    case 4: {

                        System.out.println("Acabou o jogado " + vencedor.getNome() + " venceu");

                        for (Jogador j : jogadores) {
                            j.setPalitosTotal(3);
                            // j.getEntrada().close();
                            // j.getSaida().close();
                        }
                        //System.exit(1);
                        quantidadeJogadores--;
                        break;
                    }

                }
            }
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}

