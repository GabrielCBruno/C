#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int i, j, troca, A[MAX];
	//Entrada de dados no vetor
	for (i=0; i <MAX; i++) {
		printf("Digite o %d° elemento do vetor A: ", i+1);
		scanf("%d", &A[i]);
		fflush(stdin);
	}
	//Imprimir vetor antes
	printf("Vetor A [");
	for (i=0; i < MAX; i++) {
		printf("%d, ", A[i]);
	}
	printf("]\n\n");
	system("pause");
	//Ordenando o vetor em ordem decrescente
	for (i=0; i < MAX-1; i++) {
		for(j=i+1; j < MAX; j++) {
			if (A[i] < A[j]) {
				troca = A[i];
				A[i] = A[j];
				A[j] = troca;
			}
		}
	}
	system("cls");
	printf("\nVetor ordenado! \n");
	system("pause");
	//Imprimir vetor depois
	system("cls");
	printf("Vetor A [");
	for (i=0; i < MAX; i++) {
		printf("%d, ", A[i]);
	}
	printf("]\n\n");
	system("pause");
}
