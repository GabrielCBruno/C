#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void positivoNegativo(int num) {
	setlocale(LC_ALL, "Portuguese");
	if (num > 0) {
		printf("\nO n�mero %d � positivo. \n", num);
		system("pause");
	}else if (num < 0) {
		printf("\nO n�mero %d � negativo. \n", num);
		system("pause");
	}else {
		printf("\nO n�mero %d � sem sinal. \n", num);
		system("pause");
	}
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	positivoNegativo(num);
}
