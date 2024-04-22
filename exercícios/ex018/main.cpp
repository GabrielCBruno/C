#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float area, areaT=0, largura, comprimento;
	char comodo[25];
	do {
		printf("Digite o nome do comodo ou FIM para encerar: ");
		scanf("%s", comodo);
		fflush(stdin);
		if (strcmp(comodo, "FIM") != 0) {
			printf("\nDigite o comprimento do comodo: ");
			scanf("%f", &comprimento);
			fflush(stdin);
			printf("Digite a largura do comodo: ");
			scanf("%f", &largura);
			fflush(stdin);
			area = largura * comprimento;
			areaT = areaT + area;
		}
	}while(strcmp(comodo, "FIM") != 0);
	printf("\nA area total da casa somando todos os comodos é: %.2f Metros. \n", areaT);
	system("pause");
	return 0;
}
