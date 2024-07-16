#include <stdio.h>
#include <stdlib.h>

struct dados {
	char cor[25];
	int id;
}typedef semafaro;

int main(void) {
	semafaro s1 = {"Vermelho", 1};
	semafaro s2 = {"Amarelo", 2};
	semafaro s3 = {"Verde", 3};
	semafaro *semp;
	semp = &s1;
	for (int i=0; i < 3; i++) {
		printf("ID: %d. \nCor: %s. \n", (*semp).id, (*semp).cor);
		semp++;
	}
	printf("\n");
	system("pause");
}
