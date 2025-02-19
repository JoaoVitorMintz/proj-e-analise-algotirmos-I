#include <stdio.h>

void troca(int v[], int i, int j);
void separaParImpar(int v[], int n);

int main () {

    int n = 5;
    int v[5] = {1, 2, 5, 7, 8};

    separaParImpar(v, n);

    printf("Sequencia invertida: \n");

    for (int c = 0; c < n; c++) {
        printf("%d ", v[c]);
    }

    return 0;
}

void troca(int v[], int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;

}

void separaParImpar(int v[], int n) {
    int ini = 0, fim = n - 1;

    while (ini < fim) {
        if (v[ini] % 2 == 0) {
            ini++;
        } else if (v[fim] % 2 == 1) {
            fim--;
        } else if (ini < fim) {
            troca(v, ini, fim);
            ini++; fim--;
        }
    }


}