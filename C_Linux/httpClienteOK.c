#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* close */
#include <string.h>
#define MAX_MSG 1000

int conecta_socket_tcp( char *hostname, int porta ) {
	int sd, rc;
	struct sockaddr_in localAddr, servAddr;
	struct hostent *h;
		
	h = gethostbyname(hostname);
	if(h==NULL) {
		printf("host desconhecido '%s'\n", hostname);
		exit(1);
	}

	servAddr.sin_family = h->h_addrtype;
	memcpy((char *) &servAddr.sin_addr.s_addr, h->h_addr_list[0], h->h_length);
	servAddr.sin_port = htons(porta);

	/* cria o socket */
	sd = socket(AF_INET, SOCK_STREAM, 0);
	if(sd<0) {
		perror("problemas ao abrir socket ");
		exit(1);
	}

	/* amarra (bind) qualquer porta local */
	localAddr.sin_family = AF_INET;
	localAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	localAddr.sin_port = htons(0);

	rc = bind(sd, (struct sockaddr *) &localAddr, sizeof(localAddr));
	if(rc<0) {
		printf("Problemas ao amarrar (bind) a porta TCP %u\n", porta);
		perror("erro ");
		exit(1);
	}

	/* conecta ao servidor */
	rc = connect(sd, (struct sockaddr *) &servAddr, sizeof(servAddr));
	if(rc<0) {
		perror("problemas ao conectar ");
		exit(1);
	}

	return sd;
}

int main (int argc, char *argv[]) {
	
	int sd, rc;
	char buffer[MAX_MSG], rec_msg[MAX_MSG],rec_msg1[MAX_MSG], retorno;
	int recebidos;
	if(argc < 3) {
		printf("uso: %s <servidor> <porta>\n",argv[0]);
		exit(1);
	}
	
	sd = conecta_socket_tcp( argv[1], atoi(argv[2]) );
	
	//Mensagens Solicitadas
	sprintf(buffer, "\nUser-Agent: Mozilla/4.0 (compatible; MSIE5.01; Windows NT)\r\n");
	printf("%s", buffer);

	printf("Host:%s\n", argv[1]);

	sprintf(buffer, "Connection: Close\n");
	printf("%s\n", buffer);
	
        //Armazena GET no ponteiro *helo
	char *helo = "GET / HTTP/1.0\r\n\r\n";
	strcpy(buffer, helo);
        rc = send(sd, buffer, strlen(buffer), 0);
	printf("%s", buffer);

	/* recebe a mensagem inicial */
	recebidos = recv( sd, rec_msg, MAX_MSG-1, 0 );
	rec_msg[recebidos] = '\0';
	strcpy(rec_msg1, rec_msg);
	rec_msg[12] = '\0';

	//Compara a resposta
	if(!strcmp( rec_msg, "HTTP/1.1 400" )){
		printf("Problema com Bed request\n");
		printf("%s\n\n" ,rec_msg1);		
	}

	if(!strcmp( rec_msg, "HTTP/1.1 200" )){
		printf("%s" ,rec_msg1);		
	} 


	// Fecha o socket
	close(sd);

	return 0;
}
