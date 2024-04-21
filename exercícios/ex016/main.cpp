#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

struct produto {
  int cod;
  float preco;
  int quant;
};

struct produto p[MAX];
int cont=0;

void addProduto() {
    setlocale(LC_ALL, "Portuguese");
    int cod;
    if (cont == MAX) {
        printf("Número máximo de produtos cadrastrados. Remova algum produto!");
    }else {
        printf("Informe o código do produto ou 0 para encerar: ");
        scanf("%d", &cod);
        if (cod != 0) {
            p[cont].cod = cod;
            printf("Digite o preço do produto: ");
            scanf("%f", &p[cont].preco);
            fflush(stdin);
            printf("Digite a quantidade que deseja comprar deste produto: ");
            scanf("%d", &p[cont].quant);
            cont++;
        }
    }
    printf("\n");
    
}

void imprmirProdutos() {
    setlocale(LC_ALL, "Portuguese");
    if (cont == 0) {
        printf("\nNão há produtos para imprimir!");
    }else {
        printf("\nImprimindo todos os produtos cadastrados!");
        for (int i=0; i <cont; i++) {
            printf("\nCódigo: %d.\nPreço: %.2f.\nQuantidade: %d.\n", p[i].cod, p[i].preco, p[i].quant);
        }
    }
    printf("\n");
}

void finalizarCompra() {
    float total=0;
    if (cont == 0) {
        printf("\nNão há produtos para imprimir! \n");
    }else {
        for (int i=0; i < cont; i++) {
            total = total + (p[i].preco * p[i].quant);
        }
        printf("\nO total da compra é de %.2fR$. \n", total);
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int op;
    do {
        system("cls");
        printf("------------- Ultimax Atacado ------------- ");
        printf("\n1- Adicionar um produto ao carrinho. \n2- Imprimir todos os produtos. \n3-Finalizar a comprar.\n");
        printf("------------- Ultimax Atacado ------------- ");
        printf("\nOpção: ");
        scanf("%d", &op);
        system("cls");
        switch(op) {
            case 1:
                addProduto();
                system("pause");
                break;
            case 2:
                imprmirProdutos();
                system("pause");
                break;
            case 3:
                finalizarCompra();
                system("pause");
                break;
            default:
                printf("Valor inválido!!!\n");
                system("pause");
            break;
        }
    }while(op != 3);
}