#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{   
	char nome[100];
	int idade;
	double telefone;
	char email[200];
};
struct pessoa vetcadpessoa[200];
int pos=0;
void cadastrar()
{ 

	if(pos<200)
{
	
		printf("\n\t\t CADASTRO DE PESSOA: ");
		printf("\n Digite o nome: ");
		scanf("%s[^\n]",&vetcadpessoa[pos].nome);
		fflush(stdin);
		printf("\n Digite a idade: ");
		scanf("%d",&vetcadpessoa[pos].idade);
		fflush(stdin);
		printf("\n Digite o telefone: ");
		scanf("%lf",&vetcadpessoa[pos].telefone);
		fflush(stdin);
		printf("\n Digite o email: ");
		scanf("%s[^\n]",&vetcadpessoa[pos].email);
		fflush(stdin);
        pos=pos+1;
		system("cls");
}
else
{
		printf("\n\n\t Cadastro lotado!");
		system("pause");
		system("cls");
}
}
void listartodos()
{
	int i;
	printf("\n\t\t LISTAR TODOS: ");

	for(i=0;i<=pos-1;i++)
{
			
		printf("\n Nome...: %s",vetcadpessoa[i].nome);
		printf("\n Idade..: %d",vetcadpessoa[i].idade);
		printf("\n Salario: %.0lf",vetcadpessoa[i].telefone);
		printf("\n Email..: %s",vetcadpessoa[i].email);
		printf("\n    ========***********========"  );
}
	        printf("\n\n\t");
	        system("pause");
			system("cls");
}
void listarnome()
{	
	char nome[100];
	int i,a;
	printf("\n\t\t LISTAR POR NOME: ");
	printf(" Digite o nome: ");
	scanf("%s[^\n]",&nome);
	fflush(stdin);
a=(strcmp(vetcadpessoa[i].nome,nome)==0);	
if (a==0)
{	
	for(i=0;i<pos;i++)
{
		
	
            printf("\n\t\tNome %s Encontrado ! ",nome);
            printf("\n");
			printf("\n Nome....: %s",vetcadpessoa[i].nome);
			printf("\n Idade...: %d",vetcadpessoa[i].idade);
			printf("\n Salario.: %.0lf",vetcadpessoa[i].telefone);
			printf("\n Email...: %s",vetcadpessoa[i].email);
			fflush(stdin);
				break;			
 
}
}else{ 

printf("\n\n\t nome invalido ");
printf("\n\t");
}
            
            
			system("pause");
		    system("cls");
}
void alterarpornome()
{
char nome[100];
int i;
printf("\n\t\t ALTERAR POR NOME  ");
printf("\n Digite o nome ");
scanf("%s[^\n]",&nome);
fflush(stdin);
for(i=0;i<pos;i++)
{
if(strcmp(vetcadpessoa[i].nome,nome)==0)
{       printf("\nNome %s Encontrado para editar ! ",nome);
		printf("\n\n");
		printf("\n Digite o nome: ");
		scanf("%s[^\n]",&vetcadpessoa[i].nome);
		fflush(stdin);
		printf("\n Digite a idade: ");
		scanf("%d",&vetcadpessoa[i].idade);
		fflush(stdin);
		printf("\n Digite o telefone: ");
		scanf("%lf",&vetcadpessoa[i].telefone);
		fflush(stdin);
		printf("\n Digite o email: ");
		scanf("%s[^\n]",&vetcadpessoa[i].email);
		printf ("\n\n Alterado com sucesso!"); 
		fflush(stdin);			
}
}
        printf("\n\n");
	    system("pause");
		system("cls");
}
void excluirpornome(){
	char nome[100];
	int i,j;
	printf("\n\t\t EXCLUIR POR NOME  ");
	printf("\n digite o nome: ");
	scanf("%s[^\n]",&nome);
	fflush(stdin);
	for(i=0;i<pos;i++)
	{
	if(strcmp(vetcadpessoa[i].nome,nome)==0)
	{
		for(j=i+1;j<pos;j++)
		{
		vetcadpessoa[j-1]=vetcadpessoa[j];
		
		}
		fflush(stdin);
		printf ("\n\n\t Excluido com sucesso!"); 
		pos=pos-1;
		break;
}

}
       printf("\n\n\t");
	    system("pause");
		system("cls");	
}
int main(void)
{ 	int op;
do
{   	
	printf("\n                  ===== Menu =====               \t");
	printf("\n");
	printf("\n===== opcao 1 =====       cadastro          =====\t");
	printf("\n===== opcao 2 =====     Listar todos        =====\t");
	printf("\n===== opcao 3 =====  Listar dados por nome  =====\t");
    printf("\n===== opcao 4 =====  Alterar dados por nome =====\t");
    printf("\n===== opcao 5 =====     Excluir por nome    =====\t");
    printf("\n===== opcao 6 =====          sair           =====\t");
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
	     listarnome();     break;
	case 4 :
		 alterarpornome(); break;
	case 5 :
	     excluirpornome(); break;
	case 6 :
		return 0; break;
	default:
		printf("\n \t CODIGO INVALIDO \n");
        system ("pause");
        system("cls");
}
}while(op!=6);
}
