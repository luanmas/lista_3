#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPALAVRA 20

int main () {
    char palavra[TAMPALAVRA];
    char caractere;

    puts("Insira uma palavra : ");
    fgets(palavra , TAMPALAVRA , stdin);

    puts("Insira um caractere : ");
    scanf("%c" , &caractere);

    for(int i = 0 ; i < (sizeof(palavra) / sizeof(palavra[0])) ; i++) {
        if ( caractere == palavra[i] ) {
            printf("Esse caractere %c encontrasse na palavra %s\n" , caractere ,  palavra);
            break;
        }
    }
    
    printf("O caractere não está na palavra %s" , palavra);
}