#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num[5], maior, menor, v=0;
	for (int i=0; i <5; i++) {
		printf("Digite o %d° número: ", i+1);
		scanf("%d", &num[i]);
		//Condição usada para iniciar o valor das variáveis maior e menor.
		if (v == 0) {
			maior = num[i];
			menor = num[i];
			v= 1;
		}
		if (num[i] > maior) {
			maior = num[i];
		}
		if (num[i] < menor) {
			menor = num[i];
		}
	}
	printf("\nNa sequência de números [%d, %d, %d, %d, %d] o maior número digitado foi %d e o menor número digitado foi %d.", num[0], num[1], num[2], num[3], num[4], maior, menor);
	return 0;
}
