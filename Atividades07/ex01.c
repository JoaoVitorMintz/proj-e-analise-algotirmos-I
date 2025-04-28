#include <stdio.h>

void binario(int n, int bin[], int *index);

int main() {
    int value;
    int bin[32] = {0}; // Array para armazenar os bits, inicializado com 0
    int index = 0;      // Índice para controlar a posição no array
    
    printf("Escreva um numero inteiro e positivo: ");
    scanf("%d", &value);
    
    if (value < 0) {
        printf("Por favor, insira um numero positivo.\n");
        return 1;
    }
    
    // Caso especial para o número 0
    if (value == 0) {
        printf("0\n");
        return 0;
    }
    
    binario(value, bin, &index);
    
    // Imprime o resultado em ordem inversa
    for(int i = index - 1; i >= 0; i--) {
        printf("%d", bin[i]);
    }
    printf("\n");
    
    return 0;
}

void binario(int n, int bin[], int *index) {
    if (n > 0) {
        bin[*index] = n % 2; // Armazena o bit
        (*index)++;          // Incrementa o índice
        binario(n / 2, bin, index); // Chamada recursiva
    }
}