#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Exercício de criar lista dinaminca.

struct no {
	int dado;
	struct no *proximo;
};

typedef no *ptr_no;
ptr_no lista;
int op;

void lista_inserir(ptr_no lista) {
	while(lista->proximo != NULL) {
		lista = lista->proximo;
	}
	lista->proximo = (ptr_no) malloc(sizeof(no));
	lista = lista->proximo;
	lista->dado = rand()%100;
	lista->proximo = NULL;
}

void lista_remover(ptr_no lista) {
	int dado;
	ptr_no atual;
	atual = (ptr_no) malloc(sizeof(no));
	printf("\n\nEscolha um dos itens: \n");
	scanf("%d", &dado);
	while((lista->dado != dado)) {
		if (lista->proximo == NULL) {
			break;
		}
		atual = lista;
		lista = lista->proximo;
	}
	if (lista->dado == dado) {
		atual->proximo = lista->proximo;
	}
}

void lista_mostrar (ptr_no lista) {
	system("cls");
	while(lista->proximo != NULL) {
		printf("%d, ", lista->dado);
		lista = lista->proximo;
	}
	printf("%d, ", lista->dado);
}

void menu_mostrar() {
	setlocale(LC_ALL, "Portuguese");
	lista_mostrar(lista);
	printf("\nEscolha uma das opções: \n");
	printf("1 - Inserir no final da Lista \n2 - Remover um item da Lista \n0- Sair \n\n");
}

void menu_selecionar(int op) {
	switch (op) {
		case 1:
			lista_inserir(lista);
			break;
		case 2:
			lista_remover(lista);
			break;
	}
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	op = 1;
	lista = (ptr_no) malloc (sizeof(no));
	lista->dado = 0;
	lista->proximo = NULL;
	while(op != 0) {
		system("cls");
		menu_mostrar();
		scanf("%d", &op);
		menu_selecionar(op);
	}
	system("pause");
}
