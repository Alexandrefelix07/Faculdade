/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package palitocliente;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.HashMap;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author fernando
 */
public class Main {

    private Socket socket;
    private String hostServidor;
    private ObjectOutputStream saida;
    private ObjectInputStream entrada;
    private HashMap<String, String> dadosEntrada = new HashMap<String, String>();
    private HashMap<String, String> dadosSaida = new HashMap<String, String>();
    private Scanner teclado = new Scanner(System.in);
    private boolean inicioJogo = false;
    private String nome;

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Main aplicativo = new Main();
    }

    public Main() {
        try {

            System.out.println("Insira o endereço do servidor: ");
            hostServidor = teclado.nextLine();
            socket = new Socket(hostServidor, 2222);

            saida = new ObjectOutputStream(socket.getOutputStream());
            entrada = new ObjectInputStream(socket.getInputStream());
            System.out.println("Insira o seu nome");
            nome = teclado.nextLine();

            while (true) {
                try {

                    dadosEntrada = (HashMap<String, String>) entrada.readObject();
                    /*
                     * verifica se a mensagem retornada e diferente de vazio
                     * se for mostra a mensagem
                     * */
                    if (!" ".equals(dadosEntrada.get("mensagem"))) {
                        System.out.println(dadosEntrada.get("mensagem"));
                    }
               

                    if (inicioJogo == true) {
                        String tipoAposta = dadosEntrada.get("tipoAposta");
                        //System.out.println(tipoAposta);

                        if ("palito".equals(tipoAposta)) {

                            dadosSaida = new HashMap<String, String>();
                            System.out.println("Insira número de palitos: ");
                            dadosSaida.put("apostaPalito", Integer.toString(teclado.nextInt()));
                            dadosSaida.put("nome", nome);

                        } else if ("mesa".equals(tipoAposta)) {
                            int valor = 0;
                            do {
                                dadosSaida = new HashMap<String, String>();

                                System.out.println("Insira sua aposta da mesa: ");
                                valor = teclado.nextInt();

                                if (valor > 9) {
                                    System.out.println("Você só pode apostar um numero menor ou igual a 9");
                                }

                            } while (valor > 9);

                            dadosSaida.put("apostaMesa", Integer.toString(valor));
                            dadosSaida.put("nome", nome);

                        } else if ("resultado".equals(tipoAposta)) {

                            dadosSaida = new HashMap<String, String>();

                            dadosSaida.put("apostaMesa", " ");

                            dadosSaida.put("nome", nome);
                        }

                    }
                    dadosSaida.put("nome", nome);
                    saida.writeObject(dadosSaida);
                    saida.flush();
                    inicioJogo = true;


                } catch (ClassNotFoundException ex) {
                    Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
                }

            }

        } catch (UnknownHostException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        }

    }
}
