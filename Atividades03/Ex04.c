#include <stdio.h>
#include <String.h>

void remover(char str[], char letra, int tam);

int main() {

    char str[100], letra;

    printf("Indique uma palavra: ");
    scanf("%s", str);

    while (getchar() != '\n');

    printf("\nIndique uma letra: ");
    scanf("%c", &letra);

    int tam = strlen(str);

    remover(str, letra, tam);

    printf("\nPalavra sem a letra escolhida: %s", str);

    return 0;
}

void remover(char str[], char Letra, int tam) {
    int i, j;

    // Percorre a string e remove a letra
    for (i = 0, j = 0; i < tam; i++) {
        if (str[i] != Letra) {
            str[j] = str[i]; // Copia apenas caracteres diferentes da letra
            j++;
        }
    }

    // Adiciona o caractere nulo no final da nova string
    str[j] = '\0';
}