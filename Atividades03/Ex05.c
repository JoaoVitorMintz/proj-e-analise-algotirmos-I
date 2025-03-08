#include <stdio.h>


void numCaracter(char str[], int tam);

int main() {

    char str[5] = {'a', 'r', 'r', 'o', 'z'};
    
    numCaracter(str, 5);
    
    return 0;
}

void numCaracter(char str[], int tam) {
    int i, c, d;

    for(i = 0; i < tam; i++) {
        int qtd = 0;
        int jaContado = 0;

        for(c = 0; c < i; c++) {
            if(str[i] == str[c]) {
                jaContado = 1;
                break;
            }
        }

        if(!jaContado) {
            for(d = 0; d < tam; d++) {
                if(str[i] == str[d]) {
                    qtd += 1;
                }
            }

            if(qtd == 1) {
                printf("A letra %c aparece %d vez\n", str[i], qtd);
            } else {
                printf("A letra %c aparece %d vezes\n", str[i], qtd);
            }
        }
    }
}