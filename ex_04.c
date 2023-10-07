#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPALAVRA 20

int main() {
    char palavra[TAMPALAVRA];
    char palavra2[TAMPALAVRA];

    puts("Insira uma palavra : ");
    fgets(palavra, TAMPALAVRA, stdin);

    puts("Insira outra palavra : ");
    fgets(palavra2, TAMPALAVRA, stdin);

    for (int i = 0; i <= strlen(palavra); i++) {
        if (palavra[i] != palavra2[i]) {
            puts("As palavras são diferentes");
            exit(1);
        }
    }

    puts("As palavras são iguais");
}