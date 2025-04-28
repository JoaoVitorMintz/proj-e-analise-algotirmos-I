#include <stdio.h>

int potencia(int a, int b);

int main() {
    
    printf("\nPotencia de 5²: ");
    printf("%d", potencia(2, 5));
    

    return 0;
}

int potencia(int a, int b) {
    if(a == 0) {
        return 1;
    }
    return b * potencia(a - 1, b);
}