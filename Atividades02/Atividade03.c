#include <stdio.h>

void inverter(int v[], int n);

int main () {

    int n = 5;
    int v[5] = {2, 3, 5, 7, 11};

    inverter(v, n);

    printf("Sequencia invertida: \n");

    for (int c = 0; c < n; c++) {
        printf("%d ", v[c]);
    }

    return 0;
}

void inverter(int v[], int n) {

    int a;

    for (int d = 0; d < n / 2; d++) {
        a = v[d];
        v[d] = v[n - 1 - d];
        v[n - 1 - d] = a;
    }

}