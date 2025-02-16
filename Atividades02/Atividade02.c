#include <stdio.h>
#include <stdbool.h>

bool ehCrescente(int v[], int n);

int main () {

    int n = 5;
    int lista[5] = {1, 3, 8, 12, 17};

    bool resp = ehCrescente(lista, n);

    if (resp == true) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}

bool ehCrescente(int v[], int n) {
    int menor = 0;
    for (int c = 0; c < n - 1; c++) {
        if (v[c+1] < v[c]) {
            menor += 1;
        }
    }

    if (menor >= 1) {
        return false;
    } else {
        return true;
    }
}