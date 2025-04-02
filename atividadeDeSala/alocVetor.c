#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));


    vet = malloc(sizeof(int) * tam); // Sizeof seria 4 bytes (por ser inteiro), portanto, multiplica pelo tamanho.

    if(vet) {
        printf("Memoria alocada com sucesso!");
        for(int i = 0; i < tam; i++) {
            *(vet + i) = rand() % 100;
        }
        for(int i = 0; i < tam; i++) {
            printf("%d", *(vet + i));
        }
    } else {
        printf("Erro ao alocar memoria!\n");
    }


    free(vet);

    return 0;
}