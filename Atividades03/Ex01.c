#include <stdio.h>

int strcmp(char S1[], char S2[]);
int strcmp2(char S2[], char S3[]);
int strcmp3(char S1[], char S3[]);

int main() {
    
    char v1[10] = {'L', 'o', 'r', 'e', 'm', '\0'};
    char v2[10] = {'I', 'p', 's', 'u', 'm', '\0'};
    char v3[10] = {'d', 'o', 'l', 'o', 'r', '\0'};
    
    printf("S1 = %s, S2 = %s, S3 = %s, ENTRE S1 e S2 = %d, ENTRE S2 e S3 = %d, ENTRE S1 e S3 = %d\n", v1, v2, v3, strcmp(v1, v2), strcmp2(v2, v3), strcmp3(v1, v3));
    
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

int strcmp2(char S2[], char S3[]) {
    
    int i = 0;
    while(S2[i] != '\0' && S3[i] != '\0') {
        if(S2[i] < S3[i]) {
            return -1;
        } else if( S2[i] > S3[i]) {
            return 1;
        }
        i++;
    }
    if (S2[i] == '\0' && S3[i] == '\0') {
        return 0;
    } else if(S3[i] != '\0') {
        return -1;
    } else {
        return 1;
    }
    
}

int strcmp3(char S1[], char S3[]) {
    
    int i = 0;
    while(S1[i] != '\0' && S3[i] != '\0') {
        if(S1[i] < S3[i]) {
            return -1;
        } else if( S1[i] > S3[i]) {
            return 1;
        }
        i++;
    }
    if (S1[i] == '\0' && S3[i] == '\0') {
        return 0;
    } else if(S3[i] != '\0') {
        return -1;
    } else {
        return 1;
    }
    
}
