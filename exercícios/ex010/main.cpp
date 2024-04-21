#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num=0, maior, menor, impar=0, par=0;
    int cont=0, j=0;
    float media=0, soma=0;
    do {
        printf("Digite um número inteiro positivo ou zero para encerrar: ");
        scanf("%d", &num);
        fflush(stdin);
        if (num != 0) {
            cont++;
            soma = soma + num;
            if (j==0) {
                maior = num;
                menor = num;
                j = 1;
            }
            if (maior < num) {
                maior = num;
            }
            if (menor > num) {
                menor = num;
            }
            if (num % 2 == 0) {
                par++;
            }else {
                impar++;
            }
        }
    }while(num != 0);
    media = soma/cont;
    printf("O número de valores digitados foi: %d. \n", cont);
    printf("A media foi: %.1f. \nO maior valor digitado foi: %d. \nO menor valor digitado foi: %d. \n", media, maior, menor);
    printf("A quantidade de números pares digitados foi: %d. \nA quantidade de números impares digitados foi: %d.", par, impar);
    return 0;
}