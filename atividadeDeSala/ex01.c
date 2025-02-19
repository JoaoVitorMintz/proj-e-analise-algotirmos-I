#include <stdio.h>

int strLen(char s[]);
void Strcpy(char dst[], char org[]);

int main() {

    char str[20] = "abcde";
    char str1[20];
    printf("Tamanho da String %s: %d", str, strLen(str));

    Strcpy(str1, str);

    printf("Tamanho da String  %s: %d", str1, strLen(str1));

    return 0;

}

int strLen(char s[]) {
    
    for (int c = 0; s[c] != '\0'; i++) {
        return c;
    }
}

void Strcpy(char dst[], char org[]) {
    int i = 0;
    while (org[i] != '\0') {
        dst[i] = org[i];
        i++;
    }
    dst[i] = '\0';
}