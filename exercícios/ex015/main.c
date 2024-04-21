#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;
    char frase[125];
    printf("Digite uma frase: ");
    gets(frase);
    fflush(stdin);
    printf("Digite quantas vezes deseja repetir esta frase: ");
    scanf("%d", &num);
    for (i=0; i <num; i++) {
        printf("\n%s", frase);
    }
    return 0;
}