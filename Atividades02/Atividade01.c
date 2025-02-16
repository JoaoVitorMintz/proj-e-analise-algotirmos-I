#include <stdio.h>

int maiorNum(int v[], int n);
int menorNum(int v[], int n);
int pares(int v[], int n);
float media(int v[], int n);
void menorMedia(int v[], int n);

int main() 
{
    int n = 6;
    int v[6] = {5, 2, 3, 7, 21, 32};

    printf("Maior numero: %d", maiorNum(v, n));
    printf("\nMenor numero: %d", menorNum(v, n));
    printf("\nNumeros pares: %d", pares(v, n));
    printf("\nMedia dos numeros: %.2f", media(v, n));
    printf("\nNumeros menores que a media dos numeros %.2f: ", media(v, n));
    menorMedia(v, n);

    return 0;
    
}

// ITEM A
int maiorNum(int v[], int n) {
    int maior = 0;

    for (int c = 0; c < n; c++) {
        if (v[c] > maior) {
            maior = v[c];
        }
    }
    return maior;

}

// ITEM B
int menorNum(int v[], int n) {
    int menor = 1000;

    for (int c = 0; c < n; c++) {
        if (v[c] < menor) {
            menor = v[c];
        }
    }
    return menor;

}

// ITEM C
int pares(int v[], int n) {
    int pares = 0;

    for (int c = 0; c < n; c++) {
        if (v[c] % 2 == 0) {
            pares += 1;
        }
    }
    return pares;
}

// ITEM D
float media(int v[], int n) {
    int soma = 0;

    for (int c = 0; c < n; c ++) {
        soma += v[c];
    }

    float media = (float)soma / n;

    return media;

}

// ITEM E
void menorMedia(int v[], int n) {
    int valorMedia = media(v, n);

    for (int c = 0; c < n; c++) {
        if (v[c] < valorMedia) {
            printf("\n- %d", v[c]);
        }
    }
}