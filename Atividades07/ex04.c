#include <stdio.h>

int somaDigitos(int n);

int main() {
    int n;
    
    printf("Indique um número natural: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        while(n <= 0) {
            printf("Número não natural, ERRO!");
            printf("\nIndique um número natural: ");
            scanf("%d", &n);
        }
    }
    
    printf("\nSoma dos dígitos do número: %d", somaDigitos(n));
    
    return 0;
}

int somaDigitos(int n) {
    if(n == 0) {
        return 0;
    }
    return (n % 10) + somaDigitos(n/10);
}