#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int A[MAX], B[MAX], igual=0;
	//Entrada de dados nos vetores.	
	for (int i=0; i < MAX; i++) {
		printf("Digite o %d° elemento do vetor A: ", i+1);
		scanf("%d", &A[i]);
		fflush(stdin);
	}
	printf("\n");
	for(int i=0; i < MAX; i++) {
		printf("Digite o %d° elemento do vetor B: ", i+1);
		scanf("%d", &B[i]);
		fflush(stdin);
	}
	system("cls");
	//Imprissão dos dados dos vetores
	printf("Imprimindo os vetores A e B. \nVetor A = [");
	for (int i=0; i < MAX; i++) {
		printf("%d, ", A[i]);
	}
	printf("]. \nVetor B = [");
	for (int i=0; i < MAX; i++) {
		printf("%d, ", B[i]);
	}
	printf("]. \n\n");
	system("pause");
	//Quantidade de elementos iguais entre os vetores.
	for (int i=0; i <MAX; i++) {
		for (int j=0; j <MAX; j++) {
			if (A[i] == B[j]) {
				igual++;
				j=MAX-1;
			}
		}	
	}
	printf("\nA quantidade de elementos diferentes entre os vetores �: %d.", (2 * MAX) - (2 * igual));
}
