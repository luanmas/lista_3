#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPALAVRA 20

int main () {
    char palavra[TAMPALAVRA];
    char palavra2[TAMPALAVRA];
    char palavraConcatenada[2 * TAMPALAVRA] = {};

    puts("Insira uma palavra : ");
    fgets(palavra, TAMPALAVRA, stdin);

    puts("Insira outra palavra : ");
    fgets(palavra2, TAMPALAVRA, stdin);

    int i, j;

    for (i = 0; palavra[i] != '\0'; i++) {
        palavraConcatenada[i] = palavra[i];
    }

    for (j = 0; palavra2[j] != '\0'; j++) {
        palavraConcatenada[i + j] = palavra2[j];
    }

    puts("Palavra concatenada : ");
    for (int k = 0; k < i + j; k++) {
        printf("%c", palavraConcatenada[k]);
    }
}