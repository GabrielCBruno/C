#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Contrua uma fun��o que receba um nome e retorne o n�mero de vogais.

int vogaisNome(char nome[25]) {
	int count = 0;
	nome = strlwr(nome);
	for (int i = 0; i < strlen(nome); i++) {
		if ((nome[i] == 'a') || (nome[i] == 'e') || (nome[i] == 'i') || (nome[i] == 'o') || (nome[i] == 'u')) {
			count++;
		}
	}
	return count;
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	char nome[25];
	int res;
	printf("Digite um nome: ");
	scanf("%s", &nome);
	res = vogaisNome(nome);
	printf("\nO n�mero de vogais no nome %s �: %d", nome, res);
}
