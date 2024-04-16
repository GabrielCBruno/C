#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
	short int num;
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite um número positivo: ");
	scanf("%d", &num);
	int	quad = pow(num, 2);
	float raiz = sqrt(num);
	printf("\nO Quadrado do número %d é: %d.", num, quad);
	printf("\nA raiz quadrada do número %d é: %.2f.", num, raiz);
}
