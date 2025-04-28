#include <stdio.h>

int profundidade(int n) {
    if(n == 0 || n == 1) {
        return 0;
    } else {
        return profundidade(n - 1) + profundidade(n - 2) + 2;
    }
}


int main()
{
    int n = 5;
    printf("\nProfundidade: %d", profundidade(n));
    printf("\n");
    
    return 0;
}