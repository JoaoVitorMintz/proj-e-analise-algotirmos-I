#include <stdio.h>

int mdc(int x, int y);

int main()
{
    int x, y;
    printf("Indique o valor de X: ");
    scanf("%d", &x);
    printf("Indique o valor de Y: ");
    scanf("%d", &y);
    
    printf("\nMDC(%d, %d) = %d", x, y, mdc(x, y));

    return 0;
}

int mdc(int x, int y) {
    if(y <= x && x % y == 0) return y;
    if(x < y) return mdc(y, x);
    else return mdc(y, x % y);
}