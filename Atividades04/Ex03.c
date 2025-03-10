#include <stdio.h>

void maior_menor(int vetor[], int *maior, int *menor, int tam);

int main() {

    int vetor[10] = {9, 8, 5, 7, 3, 2, 10, 91, 55, 36}, maior = 0, menor = 1000000;


    maior_menor(vetor, &maior, &menor, 10);

    printf("Maior valor: %d\nMenor valor: %d", maior, menor);

    return 0;
}

void maior_menor(int vetor[], int *maior, int *menor, int tam) {

    for(int c = 0; c < tam; c++) {
        if(vetor[c] > *maior) {
            *maior = vetor[c];
        }
        if(vetor[c] < *menor) {
            *menor = vetor[c];
        }
    }
}