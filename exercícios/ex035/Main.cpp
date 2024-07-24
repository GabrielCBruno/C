#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#define MAX 10

struct dadosCliente {
	char nome[50];
	char hora[35];
}typedef cliente;

struct dadosFila {
	cliente cli[MAX];
	int ini, fim;
}typedef fila;

fila filaClientes;

void inicializar () {
	filaClientes.ini = 0;
	filaClientes.fim = 0;
}

void horaAtual () {
	time_t rawtime;
    struct tm *info;
    char hora[15];
    time (&rawtime);
    info = localtime(&rawtime);
    strftime(hora, sizeof(hora), "%H:%M:%S", info);
    strcpy (filaClientes.cli[filaClientes.fim].hora, hora);
	printf("\nHora Cadastrada: %s. \n", filaClientes.cli[filaClientes.fim].hora);
	system("pause");
}

void adicionarFila () {
	setlocale(LC_ALL, "Portuguese");
	printf("- - - - - - - - - - - - - - - - - - - - - - - Adicionando cliente na fila - - - - - - - - - - - - - - - - - - - - - - - \n");
	if (filaClientes.fim == MAX) {
		printf("\nNão é possível adicionar mais cliente na fila! A fila está cheia! \n");
		system("pause");
	}else {
		printf("\nDigite o nome do cliente: ");
		fflush(stdin);
		gets(filaClientes.cli[filaClientes.fim].nome);
		horaAtual();
		filaClientes.fim++;
	}
}

void removerFila () {
	setlocale(LC_ALL, "Portuguese");
	printf("- - - - - - - - - - - - - - - - - - - - - - - Removendo cliente na fila - - - - - - - - - - - - - - - - - - - - - - - \n");
	if (filaClientes.fim == 0) {
		printf("\nNão é possível remover da fila! A fila está vazia! \n");
		system("pause");
	}else {
		printf("\nRemovendo cliente da fila. \n");
		for (int i= 0; i < filaClientes.fim-1; i++) {
			filaClientes.cli[i] = filaClientes.cli[i+1];
		}
		filaClientes.fim--;
		system("pause");
	}
}

void imprimirFila () {
	setlocale(LC_ALL, "Portuguese");
	printf("- - - - - - - - - - - - - - - - - - - - - - - Imprimindo fila - - - - - - - - - - - - - - - - - - - - - - - \n");
	if (filaClientes.fim == 0) {
		printf("\nNão é possível imprimir! A fila está vazia! \n");
		system("pause");
	}else {
		for (int i=0; i < filaClientes.fim; i++) {
			printf("\nCliente: %s.", filaClientes.cli[i].nome);
			printf("\nHora_Chegada: %s.", filaClientes.cli[i].hora);
			printf("\nPosição na fila: %d. \n", i+1);
		}
		printf("\n");
		system("pause");
	}
}

int menu () {
	setlocale(LC_ALL, "Portuguese");
	int op;
	printf("- - - - - - - - - - - - - - - - - - - - - - - Menu - - - - - - - - - - - - - - - - - - - - - - - \n");
	printf("1- Adicionar Cliente na fila. \n2- Remover Cliente da fila. \n3- Imprmir a fila. \n4- Sair \n\nOpção: ");
	scanf("%d", &op);
	return op;
}

int main (void) {
	int op;
	inicializar ();
	do {
		system("cls");
		op = menu();
		switch(op) {
			case 1:
				system("cls");
				adicionarFila();
				break;
			case 2:
				system("cls");
				removerFila();
				break;
			case 3:
				system("cls");
				imprimirFila();
				break;
			case 4:
				system("cls");
				printf("Encerando o Programa... \n");
				system("pause");
				break;
		}
	}while(op != 4);
}
