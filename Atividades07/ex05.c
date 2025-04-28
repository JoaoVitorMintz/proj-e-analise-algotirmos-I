#include <stdio.h>
#include <stdlib.h>

int maxS(int *vet, int tam, int indice, int maior);
int minS(int *vet, int tam, int indice, int menor);
int somaS(int *vet, int tam);
int somaParS(int *vet, int tam);
int buscaS(int *vet, int achar, int tam, int indice);

int main() {
    int tam, achar;
    printf("Indique o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int*)malloc(tam * sizeof(int));
    
    if (vet == NULL) {
        printf("\nErro: não foi possível alocar memória.\n");
        return 1;
    }

    for(int i = 0; i < tam; i++) {
        printf("Indique o valor da posicao %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    
    printf("\nO maximo elemento da sequencia: %d", maxS(vet, tam, 0, vet[0]));
    printf("\nO minimo elemento da sequencia: %d", minS(vet, tam, 0, vet[0]));
    printf("\nSoma dos elementos da sequencia: %d", somaS(vet, tam));
    printf("\nSoma dos elementos pares da sequencia: %d", somaParS(vet, tam));
    
    printf("\nIndique um elemento para ser buscado dentro da sequencia: ");
    scanf("%d", &achar);
    
    if(buscaS(vet, achar, tam, 0) == 1) {
        printf("Valor %d presente na sequencia!", achar);
    } else {
        printf("Valor %d não presente na sequencia...", achar);
    }
    
    free(vet);
    return 0;
}

int maxS(int *vet, int tam, int indice, int maior) {
    if (indice == tam) return maior; 
    if (vet[indice] > maior) maior = vet[indice];
    return maxS(vet, tam, indice + 1, maior);
}

int minS(int *vet, int tam, int indice, int menor) {
    if (indice == tam) return menor; 
    if (vet[indice] < menor) menor = vet[indice];
    return minS(vet, tam, indice + 1, menor);
}

int somaS(int *vet, int tam) {
    if (tam == 0) return 0; 
    return vet[tam - 1] + somaS(vet, tam - 1);
}


int somaParS(int *vet, int tam) {
    if (tam == 0) return 0;
    int valor = vet[tam - 1];
    if (valor % 2 == 0) return valor + somaParS(vet, tam - 1);
    else return somaParS(vet, tam - 1);
}

int buscaS(int *vet, int achar, int tam, int indice) {
    if (indice == tam) return 0;
    if (vet[indice] == achar) return 1;
    return buscaS(vet, achar, tam, indice + 1);
}