#include <stdio.h>
#include <string.h>

void encontreMaior(char s1[], char s2[], char s3[], char maior[]);

int main() {
    char s1[10] = "abc";
    char s2[10] = "bcd";
    char s3[10] = "cde";
    char maior[10];
    
    encontreMaior(s1, s2, s3, maior);
    printf("A maior string em ordem lexicográfica: %s", maior);
    
    return 0;
}

void encontreMaior(char s1[], char s2[], char s3[], char maior[]) {
    int comparacao = strcmp(s1, s2);
    
    if (comparacao >= 0) {
        strcpy(maior, s1);
    } else {
        strcpy(maior, s2);
    }
    
    comparacao = strcmp(s3, maior);
    
    if (comparacao > 0) {
        strcpy(maior, s3);
    }
}