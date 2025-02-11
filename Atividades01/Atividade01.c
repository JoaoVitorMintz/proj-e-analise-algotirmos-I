/*
Escreva uma função que receba um número inteiro n, esse número não contém o digito 0
(zero), e devolve n invertido, exemplo: se N igual 123 a resposta será 321.
*/

#include <stdio.h>

int inverte(int n);


int main()
{
    printf("%d", inverte(123));

    return 0;
}

int inverte(int n) {
    int resultado = 0;
    
    while (n > 0) {
        resultado = resultado * 10 + n % 10;
        n = n / 10;
    }
    
    return resultado;
    
}