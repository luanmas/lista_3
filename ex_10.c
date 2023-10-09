#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3

int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int x;
    int contador = 0;

    srand(time(NULL));

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = gerarNumeroAleatorio(1, 10);
        }
    }

    printf("Digite um valor inteiro para procurar na matriz: ");
    scanf("%d", &x);

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

    return 0;
}