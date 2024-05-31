#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void positivoNegativo(int num) {
	setlocale(LC_ALL, "Portuguese");
	if (num > 0) {
		printf("\nO número %d é positivo. \n", num);
		system("pause");
	}else if (num < 0) {
		printf("\nO número %d é negativo. \n", num);
		system("pause");
	}else {
		printf("\nO número %d é sem sinal. \n", num);
		system("pause");
	}
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	positivoNegativo(num);
}
