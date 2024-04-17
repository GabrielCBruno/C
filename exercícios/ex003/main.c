#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(int num[]) {
	setlocale(LC_ALL, "Portuguese");
	int i;
	float soma=0, med;
	for (i=0; i <=3; i++) {
		printf("Digite um número: ");
		fflush(stdin);
		scanf("%d", &num[i]);
		soma = soma + num[i];
	}
	med = (soma)/i;
	return med;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num[4];
	float resp = media(num);
	printf("A média dos números [%d, %d, %d, %d] é %.2f.", num[0], num[1], num[2], num[3], resp);
	return 0;
}
