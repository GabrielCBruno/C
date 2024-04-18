#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Funcionario {
	int codigo;
	char nome[25];
	char cargo[25];
	float salario;
	float aumento;
};

struct Funcionario func;

void cadastrarFuncionario() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome do colaborador: ");
	gets (func.nome);
	do {
		printf("Digite código [1, 2, 3, 4] do cargo: ");
		scanf("%d", &func.codigo);
	}while((func.codigo <= 0) || (func.codigo >=5));
	printf("Digite o salário do colaborador: ");
	scanf("%f", &func.salario);
	switch (func.codigo) {
		case 1:
			func.aumento = 0.4;
			func.salario = (func.salario) + (func.salario * func.aumento);
			strcpy(func.cargo, "Servente");
			printf("\nO percentual de aumento do salário do colaborador %s será de 40%c.\n", func.nome, 37);
			break;
		case 2:
			func.aumento = 0.35;
			func.salario = (func.salario) + (func.salario * func.aumento);
			strcpy(func.cargo, "Pedreiro");
			printf("\nO percentual de aumento do salário do colaborador %s será de 35%c. \n", func.nome, 37);
			break;
		case 3:
			func.aumento = 0.2;
			func.salario = (func.salario) + (func.salario * func.aumento);
			strcpy(func.cargo, "Mestre de Obras");
			printf("\nO percentual de aumento do salário do colaborador %s será de 20%c. \n", func.nome, 37);
			break;
		case 4:
			func.aumento = 0.1;
			func.salario = (func.salario) + (func.salario * func.aumento);
			strcpy(func.cargo, "Técnico de Segurança");
			printf("\nO percentual de aumento do salário do colaborador %s será de 10%c. \n", func.nome, 37);
			break;
	}
	system ("pause");
}

void imprimirFuncionario() {
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	printf("-------------------------------- Impressão de dados do Funcionário --------------------------------");
	printf("\n\nNome: %s.\nCódigo: %d.\nCargo: %s. \nSalárioFinal: %.2f. \nPercentual de aumento: %.2f. \n\n", func.nome, func.codigo, func.cargo, func.salario, func.aumento);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	cadastrarFuncionario();
	imprimirFuncionario();
	return 0;
} 
