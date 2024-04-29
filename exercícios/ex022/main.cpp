#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3


void entradaMatriz(int (*M)[L][C]) {
	int i, j, num;
	system("cls");
	printf("------------- Entrada de valor Matriz ------------- \n\n");
	for (i=0; i <L; i++) {
		for (j=0; j < C; j++) {
			printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
			scanf("%d", &num);
			fflush(stdin);
			(*M)[i][j] = num;
		}
	}
	printf("\nMatriz salva com sucesso! \n");
	system("pause");
}

void imprimirMatriz(int M[L][C]) {
	int i, j;
	for (i=0; i < L; i++) {
		for (j=0; j < C; j++) {
			printf("%d\t", M[i][j]);
			if (j == C-1) {
				printf("\n");
			}
		}
	}
	printf("\n");
}

void operacaoMatriz(int M[L][C], int N[L][C]) {
	int i, j, soma[L][C], dife[L][C];
	system("cls");
	for (i=0; i < L; i++) {
		for (j=0; j < C; j++) {
			soma[i][j] = M[i][j] + N[i][j];
			dife[i][j] = M[i][j] - N[i][j];
		}
	}
	printf("Soma de Matrizes \n");
	imprimirMatriz(soma);
	printf("Diferença de Matrizes \n");
	imprimirMatriz(dife);
	printf("\n\n");
	system("pause");
}

int main(void) {
	int mat1[L][C], mat2[L][C];
	entradaMatriz(&mat1);
	entradaMatriz(&mat2);
	operacaoMatriz(mat1, mat2);
}
