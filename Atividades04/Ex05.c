/*
ALUNO: João Vitor Garcia Aguiar Mintz
RA: 10440421
*/


#include <stdio.h>
#include <math.h>

void valor_cos_sin(float *seno, float *cosseno, int angulo);

int main() {

    int x;
    float cos, sin;

    printf("Indique o valor de um angulo em graus: ");
    scanf("%d", &x);

    valor_cos_sin(&sin, &cos, x);

    printf("~Sendo %d graus~\nValor do cosseno: %f\nValor do seno: %f", x, cos, sin);

    return 0;
}

void valor_cos_sin(float *seno, float *cosseno, int angulo) {
    float rad = angulo * (3.14 / 180);
    *seno = sin(rad);
    *cosseno = cos(rad);
}