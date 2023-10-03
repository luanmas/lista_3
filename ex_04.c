#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPALAVRA 20

int main () {
    char palavra[TAMPALAVRA];
    char palavra2[TAMPALAVRA];
    int contador = 0;

    puts("Insira uma palavra : ");
    fgets(palavra , TAMPALAVRA , stdin);

    puts("Insira outro palavra : ");
    fgets(palavra2 , TAMPALAVRA , stdin);


    for(int i = 0 ; i < TAMPALAVRA ; i++) {
        for (int j = 0; j < TAMPALAVRA ; i++) {
            if(palavra[i] == palavra2[j]) {
                contador++;
            }
        }
    }
}