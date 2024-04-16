#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	char nome[25];
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o seu nome: ");
	fflush(stdin);
	scanf("%25[^\n]s", nome);
	printf("Bem vindo(a) à disciplina de Algoritmos e Lógica de Programação II, %s.", nome);
	return 0;
}
