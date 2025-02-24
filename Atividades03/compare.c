#include <stdio.h>

int strcmp(char S1[], char S2[]);

int main() {
    
    char v1[10] = {'L', 'o', 'r', 'e', 'm', '\0'};
    char v2[10] = {'I', 'p', 's', 'u', 'm', '\0'};
    
    printf("S1 = %s, S2 = %s, resultado = %d\n", v1, v2, strcmp(v1, v2));
    
    return 0;
    
}

int strcmp(char S1[], char S2[]) {
    
    int i = 0;
    while(S1[i] != '\0' && S2[i] != '\0') {
        if(S1[i] < S2[i]) {
            return -1;
        } else if( S1[i] > S2[i]) {
            return 1;
        }
        i++;
    }
    if (S1[i] == '\0' && S2[i] == '\0') {
        return 0;
    } else if(S2[i] != '\0') {
        return -1;
    } else {
        return 1;
    }
    
}
