#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 30

int main() {
    setlocale(LC_ALL, "Portuguese");
    int q=0, i;
    for (i=0; i < MAX; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("O número %d é divisível por 3 e por 7.\n", i);
            q++;
        }
    }
    printf("\nA quantidade de números divisíveis por 3 e por 7, de 0 até %d, é: %d.", MAX, q);
    return 0;
}