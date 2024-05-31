#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somatorio(int N) {
	int soma=0, i=0, check=0;
	while (check <= N) {
		if (i % 2 == 0) {
			soma += i;
			check++;
		}
		i++;
	}
	return soma;
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int num, res;
	printf("Digite o valor de N: ");
	scanf("%d", &num);
	res = somatorio(num);
	printf("\nO somatório dos %d primeiros números pares é: %d.", num, res);
}
