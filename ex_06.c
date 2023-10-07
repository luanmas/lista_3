#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPALAVRA 20

int main() {
    char palavra[TAMPALAVRA];
    char palavraInversa[TAMPALAVRA];

    puts("Insira uma palavra : ");
    fgets(palavra, TAMPALAVRA, stdin);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == '\n') {
            palavra[i] = '\0';
            break;
        }
    }

    int tamanhoPalavra = strlen(palavra);
    int j = 0;

    for (int i = tamanhoPalavra - 1; i >= 0; i--) {
        palavraInversa[j++] = palavra[i];
    }
    palavraInversa[j] = '\0';

    puts("Palavra inversa : ");
    for (int i = 0; palavraInversa[i] != '\0'; i++) {
        printf("%c", palavraInversa[i]);
    }

    printf("\n");
}
