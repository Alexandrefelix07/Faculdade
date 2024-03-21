#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct pessoa
{   
	char nome[200];
	int Cpf[80];
	int telefone[80];
	int rg[80];
	char Endereco[200];
};
	struct pessoa vetcadpessoa[6];
	int pos=0;
void cadastrar()
{ 

if(pos<6)
{
	printf("\n\t\t CADASTRO DE PESSOA: ");
	printf("\n Digite o nome: ");
	fgets(&vetcadpessoa[pos].nome);
	fflush(stdin);
	printf("\n Digite a Cpf: ");
	scanf("%s[^\n]",&vetcadpessoa[pos].Cpf);
	fflush(stdin);
	printf("\n Digite o rg: ");
	scanf("%s[^\n]",&vetcadpessoa[pos].rg);
	fflush(stdin);
	printf("\n Digite o Endereco: ");
	scanf("%s[^\n]",&vetcadpessoa[pos].Endereco);
	fflush(stdin);
	printf("\n Digite o Telefone: ");
	scanf("%s[^\n]",&vetcadpessoa[pos].telefone);
	fflush(stdin);
	pos=pos+1;
	int i;	
	FILE *arquivo;
for(i=0;i<=pos-1;i++){
	arquivo= fopen("dado.txt","a");
	fprintf(arquivo,"\n == CLiente == ");
	fprintf(arquivo,"\n Nome...: %s",vetcadpessoa[i].nome);
	fprintf(arquivo,"\n Cpf..: %s",vetcadpessoa[i].Cpf);
	fprintf(arquivo,"\n RG: %s",vetcadpessoa[i].rg);
	fprintf(arquivo,"\n telefone: %s",vetcadpessoa[i].telefone);
	fprintf(arquivo,"\n Endereco..: %s",vetcadpessoa[i].Endereco);
	fprintf(arquivo,"\n    ========***********========"  );				
}
	fclose(arquivo);
	system("cls");
}
}
void listartodos()
{	
	FILE *arquivo;
	arquivo= fopen("dado.txt","r");
	char dados[300];
if(arquivo == NULL){
	printf("Arquivo nao pode ser Aberto !");
	system("pause");
	return ;
}

while(fgets(dados, 300 ,arquivo)!= NULL ){
	printf("%s\n",dados);

}
	fclose(arquivo);
	system("pause");
	system("cls");
}


int main(int argc,char *argv[]){ 	


int op;
do{   	
printf("\n                  ===== Menu =====               \t");
printf("\n");
printf("\n===== opcao 1 =====       cadastro          =====\t");
printf("\n===== opcao 2 =====     Listar os Clientes       =====\t");
printf("\n===== opcao 3 =====          sair           =====\t");
printf("\n");
printf("\n ESCOLHA A OPCAO DESEJADA ");
scanf("%d",&op);
system("cls");
switch (op){
case 1 :
cadastrar();      break;
case 2 :
listartodos();    break;
case 3 :
return 0; break;
default:
printf("\n \t CODIGO INVALIDO \n");
system ("pause");
system("cls");
}
}while(op!=3);

}
