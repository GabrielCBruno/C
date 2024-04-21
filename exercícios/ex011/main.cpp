#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, i;
    float serie=0, divisor;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    for (i=1; i <=num; i++) {
        divisor = i;
        serie = serie + 1/divisor;
    }
    printf("O valor da serie é: %.2f", serie);
    
    return 0;
}