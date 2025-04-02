#include <stdlib.h>
#include <stdio.h>


int main() {

    char *x;

    //x = malloc(sizeof(int));
    x = calloc(1, sizeof(char));

    if(x) { // MESMA COISA QUE if(x != NULL)
        printf("Memoria alocada com sucesso!\n");
        printf("x: %c\n", *x);
        *x = 'H';  // Alocando memória (quantidade de bytes)
        printf("x: %c\n", *x);
    } else {
        printf("ERRO AO ALOCAR MEMORIA!\n");
    }

    return 0;
}