#include <stdio.h>

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

void separaParImpar(int v[], int n) {

    int par = 0;
    int impar = n - 1;

    while (par <= impar) {
        if (v[par] % 2 == 0) {
            par++;
        } else {
            int a = v[par];
            v[par] = v[impar];
            v[impar] = a;
            impar--;
        }
    }

}