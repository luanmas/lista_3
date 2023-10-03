#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPALAVRA 20

int main () {
    char palavra[TAMPALAVRA];
    int contador = 0;

    puts("Insira uma palavra : ");
    fgets(palavra , TAMPALAVRA , stdin);


    for(int i = 0 ; i < TAMPALAVRA ; i++) {
        if(palavra[i] == '\n') {
            printf("Número de caracteres : %d" , contador);
            return 0;
        }

        contador++;
    }
}