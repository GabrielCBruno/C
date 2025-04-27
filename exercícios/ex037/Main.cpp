//Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define MAX 10

//Implementando um Grafo

int tamanho = 0;
int grafo[MAX];
int ma[MAX][MAX];
int op=1;

//Define o número de vértices do Grafo.
int grafo_tamanho() {
	setlocale(LC_ALL, "Portuguese");
	int tamanho;
	printf("Escolha a quantidade de vértices do grafo: ");
	scanf("%d", &tamanho);
	return tamanho;
}

//Inserir aresta.
void grafo_inserir() {
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	system("cls");
	printf("Escolha o vértice de origem entre 0 a %d: ", tamanho - 1);
	scanf("%d", &num1);
	printf("Escolha o vértice de origem entre 0 a %d: ", tamanho - 1);
	scanf("%d", &num2);
	if (num1 > tamanho-1 || num2 > tamanho-1 || num1 < 0 || num2 < 0) {
		printf("\nOs valores precisam estar entre 0 e %d \n\n\n", tamanho);
		system("pause");
	}else {
		ma[num1][num2]=1;
		ma[num2][num1]=1;
	}
}

//Remover aresta.
void grafo_remover() {
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	system("cls");
	printf("Escolha o vértice de origem entre 0 a %d: ", tamanho);
	scanf("%d", &num1);
	printf("Escolha o vértice de origem entre 0 a %d: ", tamanho);
	scanf("%d", &num2);
	if (num1 > tamanho-1 || num2 > tamanho-1 || num1 < 0 || num2 < 0) {
		printf("\nOs valores precisam estar entre 0 e %d \n\n\n", tamanho);
		system("pause");
	}else {
		ma[num1][num2]=0;
		ma[num2][num1]=0;
	}
}

//Função para desenhar o vetor de vértices.
void grafo_desenhar() {
	//Desenhando lista de vértices
	setlocale(LC_ALL, "Portuguese");
	printf("Lista de vértices \n[ " );
	for(int i=0; i < tamanho; i++) {
		printf("%d ", grafo[i]);
	}
	printf("] \n\n");
}

//Função para desenhar a matriz de arestas.
void grafo_desenhar_ma() {
	//Desenhando matriz de adjacência
	setlocale(LC_ALL, "Portuguese");
	printf("Matriz de adjacência \n[\n");
	for(int i=0; i < tamanho; i++) {
		for(int j=0; j < tamanho; j++) {
			printf("	%d", ma[i][j]);
		}
		printf("\n");
	}
	printf("]\n\n");
}

void menu_mostrar() {
	setlocale(LC_ALL, "Portuguese");
	printf("\nEscolha uma opção: \n");
	printf("1 - Inserir aresta \n");
	printf("2 - Remover aresta \n");
	printf("0 - Sair \n");
	printf("\nOpção: ");
	scanf("%d", &op);
}


int main(void) {
	setlocale(LC_ALL, "Portuguese");
	while(tamanho <= 0 || tamanho > MAX) {
		tamanho = grafo_tamanho();
		if(tamanho <= 0 || tamanho > MAX) {
			system("cls");
			printf("Escolha um valor entre  1 e %d! \n\n", MAX);
		}else {
			for(int i=0; i < tamanho; i++) {
				grafo[i] = i;
			}
		}
	}	
	while(op != 0) {
		system("cls");
		grafo_desenhar();
		grafo_desenhar_ma();
		menu_mostrar();
		switch(op) {
			case 1:
				grafo_inserir();
			break;
			case 2:
				grafo_remover();
			break;
			}
		system("pause");
	}
}
