#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 5

typedef struct Aluno {
	char nome[25];
	float notas[4];
	float media;
}Aluno;

Aluno alunos[MAX];
int q=0;

void cadastrarAluno() {
	setlocale(LC_ALL, "Portuguese");
	int soma=0;
	int j;
	printf("------------------ Cadastrar Aluno ------------------ \n");
	if (q == MAX) {
		printf("\nNão é possível cadastrar mais alunos! Remova algum! \n");
		system("pause");
	}else {
		printf("\nDigite o nome do aluno: ");
		scanf("%s", &alunos[q].nome);	
		for (j=0; j < 4; j++) {
			printf("\nDigite a nota %d do aluno: ", j+1);
			scanf("%f", &alunos[q].notas[j]);
			soma = soma + alunos[q].notas[j];
		}
		alunos[q].media = soma/4;
		printf("\nO aluno %s ficou com a média %.2f! \n", alunos[q].nome, alunos[q].media);
		q++;
		system("pause");
	}
}

void imprimirAluno() {
	setlocale(LC_ALL, "Portuguese");
	printf("---------------- Imprimindo Alunos ---------------- \n");
	if (q == 0) {
		printf("\nNão há alunos cadastrados! Por favor cadastre um aluno. \n");
		system("pause");
	}else {
		for (int i=0; i < q; i++) {
			printf("\nAluno %d. \nNome: %s. \nMédia_Final: %.2f. \n", i+1, alunos[i].nome, alunos[i].media);
		}
		printf("\n");
		system("pause");
	}
}

void classificarMedia() {
	setlocale(LC_ALL, "Portuguese");
	if (q == 0) {
		printf("\nNão há alunos cadastrados! Por favor cadastre um aluno. \n");
		system("pause");
	}else {
		Aluno alunos2;
		for (int i=0; i < q-1; i++) {
			for (int j=i+1; j < q; j++) {
				if (alunos[i].media > alunos[j].media) {
					alunos2 = alunos[i];
					alunos[i] = alunos[j];
					alunos[j] = alunos2;
				}
			}
		}
		printf("\nAlunos organizados em ordem de média! \n");
		system("pause");
	}
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int op=0;
	do {
		system("cls");
		printf("------------- Sistema Educacional ------------- \n");
		printf("\n1- Cadastrar Aluno. \n2- Imprimir todos os alunos cadastrados. \n3- Ordenar alunos por média. \n4- Sair.");
		printf("\n\nOpção: ");
		scanf("%d", &op);
		system("cls");
		switch(op) {
			case 1:
				cadastrarAluno();
				break;
			case 2:
				imprimirAluno();
				break;
			case 3:
				classificarMedia();
				break;
			case 4:
				printf("Saindo! \n");
				system("pause");
				break;
			default:
				system("cls");
				printf("Opção Inválida!!! \n");
				system("pause");
				break;
		}
	}while(op != 4);
	return 0;
}
