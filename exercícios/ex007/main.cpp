#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	switch (num) {
		case 1:
			printf("\nJaneiro!");
			break;
		case 2:
			printf("\nFevereiro!");
			break;
		case 3:
			printf("\nMarço!");
			break;
		case 4:
			printf("\nAbril!");
			break;
		case 5:
			printf("\nMaio!");
			break;
		case 6:
			printf("\nJunho!");
			break;
		case 7:
			printf("\nJulho!");
			break;
		case 8:
			printf("\nAgosto!");
			break;
		case 9:
			printf("\nSetembro!");
			break;
		case 10:
			printf("\nOutubro!");
			break;
		case 11:
			printf("\nNovembro!");
			break;
		case 12:
			printf("\nDezembro!");
			break;
		default:
			printf("Valor inválido!!!");
			break;
	}
	return 0;
}
