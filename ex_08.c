#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_DO_VETOR 100

int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        trocar(&vetor[i], &vetor[minIndex]);
    }
}

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main() {
    int vetor[TAMANHO_DO_VETOR];
    int min, max;

    printf("Digite o valor mínimo do intervalo: ");
    scanf("%d", &min);
    printf("Digite o valor máximo do intervalo: ");
    scanf("%d", &max);

    srand(time(NULL));

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        vetor[i] = gerarNumeroAleatorio(min, max);
    }

    selectionSort(vetor, TAMANHO_DO_VETOR);

    printf("Vetor ordenado pelo método de seleção:\n");
    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        vetor[i] = gerarNumeroAleatorio(min, max);
    }

    bubbleSort(vetor, TAMANHO_DO_VETOR);

    printf("Vetor ordenado pelo método bubble sort:\n");
    for (int i = 0; i < TAMANHO_DO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}