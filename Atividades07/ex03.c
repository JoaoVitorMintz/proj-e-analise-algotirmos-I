#include <stdio.h>

int contarDigitos(int n, int qtd);

int main() {
    int n;
    int qtd = 0;
    
    printf("Indique um número natural: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("\nNúmero não natural, ERRO!");
    }
    
    printf("\nQuantidade de dígitos do número: %d", contarDigitos(n, qtd));
    
    return 0;
}

int contarDigitos(int n, int qtd) {
    if(n / 10 < 1) {
        return qtd += 1;
    }
    if(n / 10 >= 1) {
        contarDigitos(n / 10, qtd + 1);
    }
}