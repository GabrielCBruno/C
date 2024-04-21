#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num=200;
    float soma=0;
    white (num <=500) {
        if (num % 2 != 0) {
            soma = soma + num;
        } 
    }
    printf("A soma dos números inteiros de entre 200 e 500 é: %.2f.", soma);
    return 0;
}