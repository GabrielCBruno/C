#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, soma=0;
    
    for (i=200; i <=500; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }
    printf("A soma dos númreos inteiros entre 200 e 500 é: %d.", soma);
    return 0;
}