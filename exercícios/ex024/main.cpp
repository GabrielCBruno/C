#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 3

typedef struct Livro {
	char titulo[35];
	char autor[25];
	char editora[25];
	char edicao[15];
	int ano;
}Livro;

Livro livros[MAX];

void cadastrarLivro() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	for (i=0; i < MAX; i++) {
		system("cls");
		printf("------------------ Cadastro de livros ------------------ \n");
		printf("\nLivro %d.", i+1);
		printf("\n\nDigite o nome do livro: ");
		gets(livros[i].titulo);
		fflush(stdin);
		printf("\nDigite o nome do autor: ");
		gets(livros[i].autor);
		fflush(stdin);
		printf("\nDigite a editora: ");
		gets(livros[i].editora);
		fflush(stdin);
		printf("\nDigite a edição do livro: ");
		gets(livros[i].edicao);
		fflush(stdin);
		printf("\nDigite o ano de lançamento: ");
		scanf("%d", &livros[i].ano);
		fflush(stdin);
	}
	printf("\nLivros cadastrados! \n");
	system("pause");
}

void imprimirLivro() {
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	int i;
	printf("----------------- Imprimindo livros ----------------- \n");
	for (i=0; i < MAX; i++) {
		printf("\nTítulo: %s. \nAutor: %s. \nEditora: %s. \nEdição: %s. \nAno: %d. \n", livros[i].titulo, livros[i].autor, livros[i].editora, livros[i].edicao, livros[i].ano);
	}
	printf("\n");
	system("pause");
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	cadastrarLivro();
	imprimirLivro();
	return 0;
}
