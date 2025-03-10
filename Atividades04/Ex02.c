#include <stdio.h>

void XXX(int mnts, int *horas, int *min);

int main() {

    int min, h, m;

    printf("Indique um valoe me minutos: ");
    scanf("%d", &min);

    XXX(min, &h, &m);

    printf("%d:%d", h, m);

    return 0;

}

void XXX(int mnts, int *horas, int *min) {
    *horas = mnts / 60;
    *min = mnts % 60;
}