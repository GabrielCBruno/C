#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

struct dadosLivro {
	int cod;
	char nome[45];
	char autor[35];
}typedef Livro;

struct dadosPilha {
	Livro pos[MAX];
	int fim;
	int ini;
}typedef Pilha;

Pilha pilha;

void inicializacao() {
	pilha.fim = 0;
	pilha.ini = 0;
}

void empilhamento() {
	setlocale(LC_ALL, "Portuguese");
	if (pilha.fim == MAX) {
		printf("A pilha está cheia! Por favor remover um item da pilha para liberar espaço. \n");
		system("pause");
	} else {
		printf("\t- - - - - - - - - - - - - - - Empilhamento - - - - - - - - - - - - - - -\n");
		printf("\nDigite o código do livro: ");
		scanf("%d", &pilha.pos[pilha.fim].cod);
		fflush(stdin);
		pilha.pos[pilha.fim].cod = pilha.fim+1;
		printf("Digite o nome do livro: ");
		gets(pilha.pos[pilha.fim].nome);
		fflush(stdin);
		printf("Digite o nome do autor do livro: ");
		gets(pilha.pos[pilha.fim].autor);
		fflush(stdin);
		pilha.fim++;
		printf("\n\nLivro salvo na pilha com sucesso! \n");
		system("pause");
		system("cls");
	}
}

void desempilhamento() {
	setlocale(LC_ALL, "Portuguese");
	if (pilha.fim == pilha.ini) {
		printf("Impossível desempilhar! A pilha está vazia. \n");
		system("pause");
	}else {
		pilha.fim--;
		printf("Desempilhando... \n");
		system("pause");
		system("cls");
	}
}

void imprimirPilha () {
	setlocale(LC_ALL, "Portuguese");
	if (pilha.fim == pilha.ini) {
		printf("Impossível imprimir! A pilha está vazia. \n");
		system("pause");
	}else {
		for (int i=0; i < pilha.fim; i++) {
			printf("\tLivro %d \n\nCódigo: %d. \nNome: %s. \nAutor: %s. \n\n", i+1, pilha.pos[i].cod, pilha.pos[i].nome, pilha.pos[i].autor);
		}
		printf("\n");
		system("pause");
	}
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int op;
	inicializacao();
	do {
		system("cls");
		printf("\t\t- - - - - - - - - - - - - - Menu - - - - - - - - - - - - - -");
		printf("\n\n1- Adicionar Livro a pilha. \n2- Remover item da pilha. \n3- Imprimir todos os livros da pilha. \n4- Sair");
		printf("\n\nEscolha: ");
		scanf("%d", &op);
		system("cls");
		switch (op) {
			case 1:
				empilhamento();
				break;
			case 2:
				desempilhamento();
				break;
			case 3:
				imprimirPilha();
				break;
			case 4:
				printf("Saindo... \n");
				system("pause");
				break;
			default:
				printf("Opção Inválida! \n");
				system("pause");
				break;
		}
	}while (op != 4);
}
