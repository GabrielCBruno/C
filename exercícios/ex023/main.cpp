#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

struct Aluno {
	char nome[25];
	float notas[4];
	float media;
};

struct Aluno alunos[MAX];

void cadastrarAluno() {
	setlocale(LC_ALL, "Portuguese");
	float soma;
	for (int i=0; i < MAX; i++) {
		soma=0;
		printf("Digite o nome do aluno %d: ", i+1);
		scanf("%[25^\n]s", &alunos[i].nome);
		fflush(stdin);
		for (int j=0; j < 4; j++) {
			printf("\nDigite a nota %d do aluno %s: ", j+1, alunos[i].nome);
			scanf("%f", &alunos[i].notas[j]);
			soma = soma + alunos[i].notas[j];
		}
		alunos[i].media = soma/4;
		printf("\nO aluno %s ficou com a média %.2f!", alunos[i].nome, alunos[i].media);
	}
}

void classificarMedia() {
	setlocale(LC_ALL, "Portuguese");
	float vetor[MAX];
	float troca;
	printf("\n---------------- Classificação dos alunos por média ----------------");
	for (int i=0; i < MAX-1; i++) {
		for (int j=i+1; j < MAX; j++) {
			if (alunos[i].media > alunos[j].media) {
				vetor[i] = alunos[i].media;
			}
		}
	}
}

int main(void) {
	
}
