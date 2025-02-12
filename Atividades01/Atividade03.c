#include <stdio.h>
#include <stdbool.h>

bool Primo(int n);

int main()
{
    int n = 7;
    
    bool res = Primo(n);
    
    if (res == true) {
        printf("É primo!");
    } else {
        printf("Não é primo...");
    }

    return 0;
}

bool Primo(int n) {
    int divisivel = 0;
    int resto = 0;
    
    for (int c = 1; c <= n; c++) {
        resto = n % c;
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