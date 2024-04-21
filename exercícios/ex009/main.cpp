#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int codEstado, codCarga, peso;
	float imposto, taxa_imp, preco, preco_quilo, total;
	printf("Digite o código do Estado: ");
	scanf ("%d", &codEstado);
	fflush(stdin);
	printf("Digite o peso da carga em tonelas: ");
	scanf("%d", &peso);
	fflush(stdin);
	printf("Digite o código da carga: ");
	scanf("%d", &codCarga);
	fflush(stdin);
	switch (codEstado) {
		case 1:
			taxa_imp = 0.2;
			break;
		case 2:
			taxa_imp = 0.15;
			break;
		case 3:
			taxa_imp = 0.1;
			break;
		case 4:
			taxa_imp = 0.05;
			break;
		default:
			taxa_imp = 0;
			printf("Valor Inválido!!!");
			break;
	}
	if (codCarga >= 10 && codCarga <= 20) {
		preco_quilo = 180;
	}else if (codCarga >= 21 && codCarga <= 30) {
		preco_quilo = 120;
	}else if (codCarga >=31 && codCarga <=40) {
		preco_quilo = 230;
	}else {
		printf ("\nCódigo de carga inválido!!!\n");
		preco_quilo =0;
	}
	imposto = peso * 1000 * preco_quilo * taxa_imp;
	preco = peso * 1000 * preco_quilo;
	total = preco + imposto;
	printf("\nPeso em kg: %d\nPreço %.2f\nImposto: %.2f\nTotal: %.2f\n", peso*1000, preco, imposto, total);
	return 0;
}
