#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float calcularArea(float r) {
	float area;
	area = 3.14 * (pow(r, 2)); 
	return area; 
}

float calcularPerimetro(float r) {
	float perimetro;
	perimetro = (2 * 3.14) * r;
	return perimetro;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	float raio;
	printf ("--------------------- C�lculo da �rea e Per�metro de um C�rculo --------------------\nInforme o raio: ");
	scanf("%f", &raio);
	printf("\n\nArea: %.2f. \nPer�metro: %.2f.", calcularArea(raio), calcularPerimetro(raio));
	return 0;
}
