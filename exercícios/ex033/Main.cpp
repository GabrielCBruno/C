#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Crie um programa que leia uma variável e crie dois vetores dinâmicos, um com o tamanho lido
//e outro com o dobro desse tamanho. Preencha esses vetores respcetivamente com potências de
//2 e potências de 3.

int main(void) {
	int tam;
	int *vetor1;
	int *vetor2;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	vetor1 = (int *) malloc(sizeof(int) * tam);
	vetor2 = (int *) malloc(sizeof(int) * (tam * 2));
	printf("\n\tVetor 1 \n");
	for (int i=0; i < tam; i++) {
		vetor1[i] = pow(2, i);
		printf("Valor: %d. \n", vetor1[i]);
	}
	printf("\n\tVetor 2 \n");
	for (int i=0; i < tam * 2; i++) {
		vetor2[i] = pow(3, i);
		printf("Valor: %d. \n", vetor2[i]);
	}
	system("pause");
}
