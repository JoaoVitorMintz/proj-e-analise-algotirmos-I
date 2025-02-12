#include <stdio.h>
#include <stdbool.h>

int primosVetor(int a, int b);
bool Primo(int N1);

int main()
{
    int N1 = 1;
    int N2 = 100;
    
    primosVetor(N1, N2);

    return 0;
}

int primosVetor(int a, int b) {
    
    for (int i = a; i <= b; i++) {
        if (Primo(i) == true) {
            printf("%d ", i);
        }
    }
    
    
}

bool Primo(int N1) {
    int divisivel = 0;
    int resto = 0;
    
    for (int c = 1; c <= N1; c++) {
        resto = N1 % c;
        if (resto == 0) {
            divisivel += 1;
        }
    }
    
    if (divisivel == 2) {
        return true;
    } else {
        return false;
    }
    
}