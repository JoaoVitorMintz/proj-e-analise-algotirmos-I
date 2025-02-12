#include <stdio.h>
#include <stdbool.h>

bool ultimoDigito(int a, int b);

int main()
{
    int a = 537;
    int b = 147;
    
    bool resp = ultimoDigito(a, b);
    
    printf("%d", resp);

    return 0;
}

bool ultimoDigito(int a, int b) {
    bool resp;
    
    if ((a - b) % 10 == 0) {
        resp = true;
    } else {
        resp = false;
    }
    
    return resp;
}