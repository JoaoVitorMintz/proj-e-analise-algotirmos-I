#include <stdio.h>

int main() {
    int x = 5, y;
    int *p;
    p = &x;

    y = *p + 10; // O * indica conteúdo!
    printf("%d", y); // Printa a soma de x (*p) + 10...
    
    y = p + 10; // Sem o * indica a posição que aponta!
    printf("\n%d", y); // Printa uma posição qualquer...
    
    return 0;
}