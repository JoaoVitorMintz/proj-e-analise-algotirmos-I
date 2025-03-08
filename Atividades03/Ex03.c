#include <stdio.h>
#include <String.h>
#include <stdbool.h>

bool ehPalindromo(char str1[], char str2[], int tam1, int tam2);

int main() {
    char str1[100] = "ovo";
    char str2[100] = "ovo";
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    printf("\n");

    if (ehPalindromo(str1, str2, tam1, tam2) == true) {
        printf("Palindromo!\n");
    } else {
        printf("Nao eh palindromo...\n\n");
    }

    return 0;

}

bool ehPalindromo(char str1[], char str2[], int tam1, int tam2) {

    if (tam1 != tam2) {
        return false;
    }

    for (int c = 0; c < tam1; c ++) {
        if (str1[c] != str2[tam2 - 1 - c]) {
            return false;
        }
    }
    
    return true;
}