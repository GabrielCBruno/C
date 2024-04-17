#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	if ((num % 3 == 0) && (num % 7 == 0)) {
		printf("\nO número %d é divisível por 3 e por 7!!!", num);
	}else {
		printf("\nO número %d não é divisível por 3 e por 7!!!", num);
	}
	return 0;
}
