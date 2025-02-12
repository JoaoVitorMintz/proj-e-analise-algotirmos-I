#include <stdio.h>

int somaPares(int v[], int tam);

int main()
{
    int lista[6] = {1, 2, 3, 4, 5, 6};
    
    
    printf("%d", somaPares(lista, 6));
    

    return 0;
}

int somaPares(int v[], int tam) {
    
    int soma = 0;
    
    for (int c = 0; c < tam; c++) {
        if (v[c] % 2 == 0) {
            soma += v[c];
        }
    }
    
    return soma;
}