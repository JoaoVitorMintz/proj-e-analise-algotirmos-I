#include <stdio.h>

int mult(int a, int b);

int main() {
    
    printf("\nMultiplicacao de 2 e 5: ");
    printf("%d", mult(2, 5));
    

    return 0;
}

int mult(int a, int b) {
    if(a == 0 ) {
        return 0;
    } else {
        return b + mult(a - 1, b);
    }
}