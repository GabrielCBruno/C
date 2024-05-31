#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int IntervaloSoma(int num1, int num2) {
	int soma=0, i;
	for (i = num1+1; i < num2; i++) {
		soma += i;
	}
	return soma;
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, res;
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	fflush(stdin);
	printf("Digite outro número inteiro: ");
	scanf("%d", &num2);
	res = IntervaloSoma(num1, num2);
	printf("\nA soma dos números inteiro entre %d e %d é: %d. \n", num1, num2, res);
	system("pause");
}
