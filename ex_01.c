#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));
    float el[15] = {};

    for (int i = 0 ; i < (sizeof(el) / sizeof(el[0])) ; i++) {
        float numRandom =  ((float)rand() / RAND_MAX) * 10.0; 
        el[i] = numRandom;
        printf("%.2f\n" , numRandom);
    }
    puts("==================");

    float maiorValor = el[0];
    for (int i = 0 ; i < (sizeof(el) / sizeof(el[0])) ; i++) {
        maiorValor < el[i] ? maiorValor = el[i] : maiorValor;
    }

    printf("%.2f" , maiorValor);
}