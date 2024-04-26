#include <stdio.h>

int main(void) {
	char palavra[15];
	int i, q;
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Digite a quatidade de vezes que deseja repetir a palavra %s: ", palavra);
	scanf("%d", &q);
	for (i = 0; i < q; i++) {
		printf("\n%s", palavra);
	}
}
