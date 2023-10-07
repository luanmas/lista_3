#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPALAVRA 20

int com_strcomp () {
    char palavra[TAMPALAVRA];
    char palavra2[TAMPALAVRA];

    puts("Digite uma palavra: ");
    fgets(palavra, TAMPALAVRA, stdin);

    puts("Digite outra palavra: ");
    fgets(palavra2, TAMPALAVRA, stdin);

    if (strcmp(palavra, palavra2) == 0) {
        printf("As palavras são iguais.\n");
    } else {
        printf("As palavras são diferentes.\n");
    }
}

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
    com_strcomp();
}