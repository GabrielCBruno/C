#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificar(char car) {
	if ((car == 'A') || (car == 'a') || (car == 'E') || (car == 'e') || (car == 'I') || (car == 'i') || (car == 'O') || (car == 'o') || (car == 'U') || (car == 'u')) {
		return 0;
	}else {
		return 1;
	}
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	char car;
	int check;
	printf("Digite um caractere: ");
	scanf("%c", &car);
	check = verificar(car);
	if (check == 0) {
		printf("\nO caractere digitado %c é uma vogal! \n", car);
		system("pause");
	}else {
		printf("\nO caractere digitado %c é uma consoante ou um número ou um caractere especial. \n", car);
		system("pause");
	} 
}
