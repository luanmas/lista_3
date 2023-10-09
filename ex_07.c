#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAMANHO_DO_VETOR 3

int main() {
    int vetor[TAMANHO_DO_VETOR];
    double soma = 0;
    double produto = 1;
    srand(time(NULL));

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        vetor[i] = rand() % 20;
    }

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        soma += vetor[i];
    }
    double mediaAritmetica = soma / TAMANHO_DO_VETOR;

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        produto *= vetor[i];
    }
    double mediaGeometrica = pow(produto, 1.0 / TAMANHO_DO_VETOR);

    printf("Vetor gerado: ");
    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("Média Aritmética: %.2lf\n", mediaAritmetica);
    printf("Média Geométrica: %.2lf\n", mediaGeometrica);

    return 0;
}