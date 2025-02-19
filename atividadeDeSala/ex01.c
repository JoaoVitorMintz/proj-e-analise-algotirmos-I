#include <stdio.h>

int strLen(char s[]);

int main() {

    char str[20] = "abcde";
    printf("Tamanho da String %s: %d", str, strLen(str));

    return 0;

}

int strLen(char s[]) {
    
    for (int c = 0; s[c] != '\0'; i++) {
        return c - 1;
    }
}