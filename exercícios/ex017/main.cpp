#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 3

struct Pessoa {
    int idade;
    char nome[25];
    float peso;
    char sexo;
    char estcivil[25];
};

struct Pessoa p[MAX];
int cont=0;

void cadastrarPessoa() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    if (cont == MAX) {
        printf("\nNúmro máximo de pessoas cadastradas alcançado!!! \n");
    }else {
        int id;
        printf("Digite a idade da pessoa ou 0 para encerrar: ");
        scanf("%d", &id);
        if (id != 0) {
            p[cont].idade = id;
            printf("Digite o nome: ");
            scanf("%s", &p[cont].nome);
            fflush(stdin);
            printf("Digite o peso: ");
            scanf("%f", &p[cont].peso);
            fflush(stdin);
            printf("Digite o sexo: ");
            scanf("%c", &p[cont].sexo);
            fflush(stdin);
            printf("Digite o estado civil: ");
            scanf("%s", &p[cont].estcivil);
            cont++;
            printf("\nPessoa cadastrada com sucesso! \n");
        }
    }
}

void imprimirPessoa() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    int i, casadas=0, solteiras=0, separadas=0, viuvas=0;
    float somaI=0, somaP=0;
    char estado[25];
    if (cont == 0) {
        printf("\nNão há pessoas cadastradas!\n");
    }else {
        printf("-------------------- Imprimindo todas as pessoas -------------------- ");
        for (i=0; i < cont; i++) {
            printf("\nNome: %s. \nIdade: %d. \nPeso: %.2f. \nSexo: %c. \nEstado_Civil: %s. \n", p[i].nome, p[i].idade, p[i].peso, p[i].sexo, p[i].estcivil);
            somaI += p[i].idade;
            somaP += p[i].peso;
            strcpy(estado, p[i].estcivil);
            if (strcmp(strlwr(estado), "casada") == 0  || strcmp(strlwr(estado), "casado") == 0) {
                casadas++;
            }else if (strcmp(strlwr(estado), "solteira") == 0  || strcmp(strlwr(estado), "solteiro") == 0) {
                solteiras++;
            }else if (strcmp(strlwr(estado), "separada") == 0  || strcmp(strlwr(estado), "separado")) {
                separadas++;
            }else if (strcmp(strlwr(estado), "viuva") == 0  || strcmp(strlwr(estado), "viuva")) {
                viuvas++;
            }
        }
        printf("\nA média das idades é: %.1f. \nA média dos pesos é: %.2f. \n\n", somaI/cont, somaP/cont);
		printf("\Quantidade de pessoas: - Solteiras: %d. - Casadas: %d. - Separadas: %d. - Viúvas: %d. \n", solteiras, casadas, separadas, viuvas);
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int op;
    do {
        system("cls");
        printf("----------------------------------------");
        printf("\n1- Cadastrar Pessoa \n2- Imprimir todas as pessoas \n3- Sair");
        printf("\nOpção: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                cadastrarPessoa();
                system("pause");
                break;
            case 2:
                imprimirPessoa();
                system("pause");
                break;
            case 3:
                printf("\n");
                system("pause");
                break;
            default:
                printf("Opção Inválida!!!");
                system("pause");
                break;
        }
    }while(op != 3);
    return 0;
}
