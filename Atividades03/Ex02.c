#include <stdio.h>
#include <string.h>

void ordemLexo(char s1[], char s2[], char s3[], char maior[], char medio[], char menor[]);

int main() {
    char str1[10] = "abobora";
    char str2[10] = "bexiga";
    char str3[10] = "dado";
    char maiorzao[10];
    char medio[10];
    char menor[10];

    ordemLexo(str1, str2, str3, maiorzao, medio, menor);

    printf("Maior lexograficamente: %s", maiorzao);
    printf("\nMedio lexograficamente: %s", medio);
    printf("\nMenor lexograficamente: %s", menor);

    return 0;
}

void ordemLexo(char s1[], char s2[], char s3[], char maior[], char medio[], char menor[]) {
    // Compara as três strings para determinar a ordem lexicográfica
    if (strcmp(s1, s2) <= 0 && strcmp(s1, s3) <= 0) {
        strcpy(menor, s1);
        if (strcmp(s2, s3) <= 0) {
            strcpy(medio, s2);
            strcpy(maior, s3);
        } else {
            strcpy(medio, s3);
            strcpy(maior, s2);
        }
    } else if (strcmp(s2, s1) <= 0 && strcmp(s2, s3) <= 0) {
        strcpy(menor, s2);
        if (strcmp(s1, s3) <= 0) {
            strcpy(medio, s1);
            strcpy(maior, s3);
        } else {
            strcpy(medio, s3);
            strcpy(maior, s1);
        }
    } else {
        strcpy(menor, s3);
        if (strcmp(s1, s2) <= 0) {
            strcpy(medio, s1);
            strcpy(maior, s2);
        } else {
            strcpy(medio, s2);
            strcpy(maior, s1);
        }
    }
}