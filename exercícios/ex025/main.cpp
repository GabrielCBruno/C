#include <stdio.h>
#include <stdlib.h>
#define MAX 30

typedef struct Contato {
	char nome[25];
	char telefone[12];
	char email[25];
}Contato;

Contato contatos[MAX];

void cadastrarContato() {
	int i;
	for (i=0; i < MAX; i++) {
		system("cls");
		printf("------------------ Cadastro Contato ------------------ \n");
		printf("\nContato %d.", i+1);
		printf("\n\nDigite o nome do contato: ");
		gets(contatos[i].nome);
		fflush(stdin);
		printf("\nDigite o telefone Ex: (DDD)(12345678): ");
		gets(contatos[i].telefone);
		fflush(stdin);
		printf("\nDigite o email: ");
		gets(contatos[i].email);
		fflush(stdin);
	}
	printf("\nContatos cadastrados! \n");
	system("pause");
}

void imprimirContato() {
	system("cls");
	int i;
	printf("----------------- Imprimindo Contatos ----------------- \n");
	for (i=0; i < MAX; i++) {
		printf("\nNome: %s. \nTelefone: %s. \nEmail: %s. \n", contatos[i].nome, contatos[i].telefone, contatos[i].email);
	}
	printf("\n");
	system("pause");
}

int main () {
	cadastrarContato();
	imprimirContato();
	return 0;
}
